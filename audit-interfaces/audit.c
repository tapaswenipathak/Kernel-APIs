#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#define unsigned long long ull
#define unsigned long ul
#define unsigned int ui
#define long long ll
#define const char cc

struct audit_buffer * audit_log_start (audit_log_startstruct audit_context * ctx, gfp_t gfp_mask, int type);
void audit_log_format (audit_log_formatstruct audit_buffer * ab, const char * fmt, ...);
void audit_log_end (audit_log_endstruct audit_buffer * ab);
void audit_log (audit_logstruct audit_context * ctx, gfp_t gfp_mask,	int type, const char * fmt,		...);
void audit_log_secctx (audit_log_secctxstruct audit_buffer * ab, u32 secid);
int audit_alloc (audit_allocstruct task_struct * tsk);
void __audit_free (__audit_freestruct task_struct * tsk);
void __audit_syscall_entry (__audit_syscall_entryint major, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4);
void __audit_syscall_exit (__audit_syscall_exitint success,		long return_code);
struct filename * __audit_reusename (__audit_reusenameconst __user char * uptr);
void __audit_getname (__audit_getnamestruct filename * name);
void __audit_inode (__audit_inodestruct filename * name, const struct dentry * dentry, unsigned int flags);
int auditsc_get_stamp (auditsc_get_stampstruct audit_context * ctx, struct timespec * t, unsigned int * serial);
int audit_set_loginuid (audit_set_loginuidkuid_t loginuid);
void __audit_mq_open (__audit_mq_openint oflag, umode_t mode, struct mq_attr * attr);
void __audit_mq_notify (__audit_mq_notifymqd_t mqdes,		const struct sigevent * notification);
void __audit_mq_notify (__audit_mq_notifymqd_t mqdes, const struct sigevent * notification);
void __audit_mq_getsetattr (__audit_mq_getsetattrmqd_t mqdes,		struct mq_attr * mqstat);
void __audit_ipc_obj (__audit_ipc_objstruct kern_ipc_perm * ipcp);
void __audit_ipc_set_perm (__audit_ipc_set_permunsigned long qbytes, uid_t uid, gid_t gid,	umode_t mode);
int __audit_socketcall (__audit_socketcallint nargs,	unsigned long * args);
void __audit_fd_pair (__audit_fd_pairint fd1, int fd2);
int __audit_sockaddr (__audit_sockaddrint len, void * a);
int audit_signal_info (audit_signal_infoint sig, struct task_struct * t);
int __audit_log_bprm_fcaps (__audit_log_bprm_fcapsstruct linux_binprm * bprm, const struct cred * new, const struct cred * prev);
void __audit_log_capset (__audit_log_capsetconst struct cred * new, const struct cred * old);
void audit_core_dumps (audit_core_dumpslong signr);
int audit_rule_change (audit_rule_changeint type,		__u32 portid, int seq, void * data, size_t datasz);
int audit_list_rules_send (audit_list_rules_sendstruct sk_buff * request_skb,		int seq);
int parent_len (parent_lenconst char * path);
int audit_compare_dname_path (audit_compare_dname_pathconst char * dname, const char * path,int parentlen);

int audit_alloc(struct task_struct *tsk)
{
	struct audit_context *context;
	enum audit_state     state;
	char *key = NULL;

	if (likely(!audit_ever_enabled))
		return 0; /* Return if not auditing. */

	state = audit_filter_task(tsk, &key);
	if (state == AUDIT_DISABLED) {
		clear_tsk_thread_flag(tsk, TIF_SYSCALL_AUDIT);
		return 0;
	}

	if (!(context = audit_alloc_context(state))) {
		kfree(key);
		audit_log_lost("out of memory in audit_alloc");
		return -ENOMEM;
	}
	context->filterkey = key;

	audit_set_context(tsk, context);
	set_tsk_thread_flag(tsk, TIF_SYSCALL_AUDIT);
	return 0;
}

static inline void audit_free_context(struct audit_context *context)
{
	audit_free_names(context);
	unroll_tree_refs(context, NULL, 0);
	free_tree_refs(context);
	audit_free_aux(context);
	kfree(context->filterkey);
	kfree(context->sockaddr);
	audit_proctitle_free(context);
	kfree(context);
}

static int audit_log_pid_context(struct audit_context *context, pid_t pid,
				 kuid_t auid, kuid_t uid, unsigned int sessionid,
				 u32 sid, char *comm)
{
	struct audit_buffer *ab;
	char *ctx = NULL;
	u32 len;
	int rc = 0;

	ab = audit_log_start(context, GFP_KERNEL, AUDIT_OBJ_PID);
	if (!ab)
		return rc;

	audit_log_format(ab, "opid=%d oauid=%d ouid=%d oses=%d", pid,
			 from_kuid(&init_user_ns, auid),
			 from_kuid(&init_user_ns, uid), sessionid);
	if (sid) {
		if (security_secid_to_secctx(sid, &ctx, &len)) {
			audit_log_format(ab, " obj=(none)");
			rc = 1;
		} else {
			audit_log_format(ab, " obj=%s", ctx);
			security_release_secctx(ctx, len);
		}
	}
	audit_log_format(ab, " ocomm=");
	audit_log_untrustedstring(ab, comm);
	audit_log_end(ab);

	return rc;
}
