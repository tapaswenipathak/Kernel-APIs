#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#define unsigned long long ull
#define unsigned long ul
#define unsigned int ui
#define long long ll
#define const char cc

int ipc_init(void);
void ipc_init_ids(struct ipc_ids *ids);
void ipc_init_proc_interface(const char * path, const char * header, int ids, int (*show) (struct seq_file *, void *));
struct kernel_ipc_perm *ipc_findkey(struct ipc_ids *ids, key_t key);
int ipc_get_maxid(struct ipc_ids *ids);
int ipc_addid(struct ipc_ids *ids, struct kern_ipc_perm *new, int size);
int ipcget_new(struct ipc_namespace *ns, struct ipc_ids *ids, const struct ipc_ops *ops, struct ipc_params *params);
int ipc_check_perms(struct ipc_namespace * ns, struct kern_ipc_perm * ipcp, const struct ipc_ops * ops,		struct ipc_params * params);
int ipcget_public(struct ipc_namespace * ns, struct ipc_ids * ids, const struct ipc_ops * ops, struct ipc_params * params);
void ipc_rmid(struct ipc_ids * ids, struct kern_ipc_perm * ipcp);
void *ipc_alloc(int size);
void ipc_free(void *ptr);
void *ipc_rcu_alloc(int size);
int ipcperms(struct ipc_namespace * ns,		struct kern_ipc_perm * ipcp, short flag);
void kernel_to_ipc64_perm(struct kern_ipc_perm * in, struct ipc64_perm * out);
void ipc64_perm_to_ipc_perm(struct ipc64_perm * in, struct ipc_perm * out);
struct kern_ipc_perm *ipc_obtain_object_idr(struct ipc_ids *ids, int id);
struct kernel_ipc_perm *ipc_lock(struct ipc_ids * ids, int id);
struct kern_ipc_perm *ipc_obtain_object_check(struct ipc_ids *ids, int id);
int ipcget(struct ipc_namespace * ns, struct ipc_ids *ids, const struct ipc_ops * ops,	struct ipc_params * params);
int ipc_update_perm(struct ipc64_perm *in, struct kern_ipc_perm *out);
struct kern_ipc_perm *ipcctl_pre_down_nolock(struct ipc_namespace * ns, struct ipc_ids * ids, int id, int cmd, struct struct ipc64_perm * perm, int extra_perm);
int ipc_parse_version(int *cmd);

