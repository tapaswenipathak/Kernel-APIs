Accounting
----------

Accounting has the following APIs

- sys_acct - This is the only system call needed to implement process accounting.
If you search in kernel code base there is no occurence of this. This takes the name
of the file where accounting records should be written. 
- acct_collect - This is used to collect accounting information into pacct_struct. If
searched in kernel codebase recent stable version you would find only one occurence
where this is used to collect information about the process. 
- acct_process - This is automatically called by the pid or threads working in the
kernel, this doesn't accept any argument.

```c
struct pacct_struct {
	int			ac_flag;
	long			ac_exitcode;
	unsigned long		ac_mem;
	u64			ac_utime, ac_stime;
	unsigned long		ac_minflt, ac_majflt;
};
```
