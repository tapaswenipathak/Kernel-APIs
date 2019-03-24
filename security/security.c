#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#define unsigned long long ull
#define unsigned long ul
#define unsigned int ui
#define long long ll
#define const char cc

int security_init (security_initvoid);
int security_module_enable (security_module_enableconst char * module);
void security_add_hooks (security_add_hooksstruct security_hook_list * hooks,		int count, char * lsm);
struct dentry * securityfs_create_file (securityfs_create_fileconst char * name, umode_t mode, struct dentry * parent, void * data, const struct file_operations * fops);
struct dentry * securityfs_create_dir (securityfs_create_dirconst char * name, struct dentry * parent);
void securityfs_remove (securityfs_removestruct dentry * dentry);

