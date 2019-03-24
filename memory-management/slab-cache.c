#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#define unsigned long long ull
#define unsigned long ul
#define unsigned int ui
#define long long ll
#define const char cc

void *kmalloc(size_t size, gfp_t flags);
void *kmalloc_array(size_t n, size_t size, gfp_t flags);
void *kcalloc(size_t n, size_t size, gfp_t flags);
void *kzalloc(size_t size, gfp_t flags);
void *kzalloc_node(size_t size, gfp_t flags, int node);
void *kmem_cache_alloc(struct kmem_cache *cachep, gfp_t flags);
void *kmem_cache_alloc_node(struct kmem_cache *cachep, gfp_t flags, int nodeid);
void kmem_cache_free(struct kmem_cache *cachep, void *objp);
void kfree(const void *objp);
size_t ksize(const void *objp);
void kfree_const(const void *x);
char *kstrdup(cc *s, gfp_t gfp);
cc *kstrdup_const(cc *s, gfp_t gfp);
char *kstrndup(cc *s, size_t max, gfp_t gfp);
void *kmemdup(const void *src, size_t len, gfp_t gfp);
void *memdup_user(const void __user *src, size_t len);
void *memdup_user_nul(const void __user *src, size_t len);
int get_user_pages_fast(ul start, int nr_pages, int write, struct page **pages);

