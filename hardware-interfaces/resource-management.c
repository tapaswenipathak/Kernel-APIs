#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#define unsigned long long ull
#define unsigned long ul
#define unsigned int ui
#define long long ll
#define const char cc

struct resource *request_resource_conflict(struct resource *root, struct resource *new);
int reallocate_resource(struct resource *root, struct resource *old, resource_size_t newsize, struct resource_constraint *constraint);
struct resource *lookup_resource(struct resource *root, resource_size_t start);
struct resource *insert_resource_conflict(struct resource *parent, struct resource *new);
void insert_resource_expand_to_fit(struct resource *root, struct resource *new);
resource_size_t resource alignment(struct resource *res);
int release_mem_region_adjustable(struct resource *parent, resource_size_t start, resource_size_t size);
int request_resource(struct resource *root, struct resource *new);
int release_resource(struct resource *prev);
int region_intersects(resource_size_t start, size_t size, ul flags, ul desc);
int allocate_resource(struct resource *root, struct resource *new, resource_size_t size, resource_size_t min, resource_size_t max, resource_size_t align, resource_size_t (*alignf) (void *, const struct resource *, resource_size_t, resource_size_t), void * alignf_data);
int insert_resource(struct resource * parent, struct resource * new);
int remove_resource(struct resource *prev);
int adjust_resource(struct resource *res, resource_size_t start, resource_size_t size);
struct resource * __request_region(struct resource *parent, resource_size_t start, resource_size_t n, cc *name, int flags);
void __release_region(struct resource *parent, resource_size_t start, resource_size_t n);
int devm_request_resource(struct device *dev, struct resource **rot, struct resource *new);
void devm_release_resource(struct device *dev, struct resource *new);
