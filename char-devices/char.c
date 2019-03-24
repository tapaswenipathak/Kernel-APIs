#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#define unsigned long long ull
#define unsigned long ul
#define unsigned int ui
#define long long ll
#define const char cc


int register_chrdev_region (register_chrdev_regiondev_t from, unsigned count, const char * name);
int alloc_chrdev_region (alloc_chrdev_regiondev_t * dev, unsigned baseminor, unsigned count, const char * name);
int __register_chrdev (__register_chrdevunsigned int major, ui baseminor, ui count, cc *name, const struct file_operations *fops);
void unregister_chrdev_region (unregister_chrdev_regiondev_t from, unsigned count);
void __unregister_chrdev (__unregister_chrdevunsigned int major, ui baseminor, ui count, cc *name);
int cdev_add (cdev_addstruct cdev * p, dev_t dev, unsigned count);
void cdev_del (cdev_delstruct cdev * p);
struct cdev * cdev_alloc (cdev_allocvoid);
void cdev_init (cdev_initstruct cdev * cdev,	const struct file_operations * fops);

