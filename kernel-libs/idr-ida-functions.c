#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#define unsigned long long ull
#define unsigned long ul
#define unsigned int ui
#define long long ll
#define const char cc

int idr_alloc(struct idr *idr, void *ptr, int start, int end, gfp_t gfp);
int idr_for_each(const struct idr *idr, int (*fn) (int id, void *p, void *data));
int idr_alloc_cyclic(struct idr *idr, void *ptr, int start, int end, gfp_t gfp);
void *idr_get_next(struct idr *idr, int *nextid);
void *idr_replace(struct idr *idr, void *ptr, int id);
int ida_get_new_above(struct ida *ida, int start, int *id);
void ida_remove(struct ida *ida, int id);
void ida_destroy(struct ida *ida);
int ida_simple_get(struct ida *ida, unsigned int start, unsigned int end, gfp_t gfp_mask);
void ida_simple_remove(struct ida *ida, ui id);

