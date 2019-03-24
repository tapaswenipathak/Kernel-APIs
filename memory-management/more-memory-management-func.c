#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#define unsigned long long ull
#define unsigned long ul
#define unsigned int ui
#define long long ll
#define const char cc

int read_cache_pages(struct address_space *mapping, struct list_head *pages, int (*filler) (void *, struct page *), void *data);
void page_cache_sync_readahead(struct address_space *mapping, struct file_ra_state *ra, struct file *flp, pgoff_t offset, ul req_size);
void page_cache_async_readahead(struct address_space *mapping, struct file_ra_state *ra, struct file *filp, struct page *page, pfogg_t offset, unsigned long req_size);
void delete_from_page_cache(struct page *page);
int filemap_flust(struct address_space *mapping);
int filemap_fdatawait_range(struct address_space *mapping, loff_t start_byte, loff_t end_byte);
int filemap_fdatawait(struct address_space *mapping);
int filemap_write_and_wait_range(struct address_space *mapping, loff_t lstart, loff_t lend);
int replace_page_cache_page(struct page *old, struct page *new, gft_t gfp_mask);
int add_to_page_cache_locked(struct page *page, struct address_space *mapping, pfogg_t offset, gfp_t gfp_mask);
void add_page_wait_queue(struct page *page, wait_queue_t *waiter);
void unlock_page(struct page *page);
void end_page_writeback(struct page *page);
void __lock_page(struct page *__page);
pgoff_t page_cache_next_hole(struct address_space *mapping, pgoff_t index, ul max_scan);
pgoff_t page_cache_prev_hole(struct address_space *mapping, pfoff_t index, ul max_scan);
struct page *find_get_entry(struct address_space *mapping, pgoff_t offset);
struct page *find_lock_entry(struct address_space *mapping, pgoff_t offset);
struct page *pagecache_get_page(struct address_space *mapping, pgoff_t offset, int fgp_flags, gfp_t gfp_mask);
unsigned find_get_pages_config(struct address_space *mapping, pgoff_t index, ui nr_pages, struct page **pages);
unsigned find_get_pages_tag(struct address_space * mapping, pgoff_t * index,, int tag,	unsigned int nr_pages, struct page ** pages);
unsigned find_get_entries_tag(struct address_space * mapping,		pgoff_t start, int tag, unsigned int nr_entries, struct page ** entries, pgoff_t * indices);
ssize_t generic_file_read_iter(struct kiocb *iocb, struct iov_iter *iter);
int filemap_fault(struct vm_fault *vmf);
struct page *read_cache_page(struct address_space * mapping, pgoff_t index,		int (*filler) (void *, struct page *), void * data);
struct page *read_cache_page_gfp(struct address_space * mapping, pgoff_t index, gfp_t gfp);
ssize_t __generic_file_write_iter(struct kiocb *iocb, struct iov_iter *from);
ssize_t generic_file_write_iter(struct kiocb *iocb, struct iov_iter *from);
int try_to_release_page(struct page *page, gfp_t gfp_mask);
int zap_vma_ptes(struct vm_area_struct *vma, ul address, ul size);
int vm_insert_page(struct vm_area_struct *vma, ul addr, struct page *page);
int vm_insert_pfn(struct vm_area_struct *vma, ul addr, ul pfn);
int vm_insert_pfn_prot(struct vm_area_struct *vma, ul addr, ul pfn, pgprot_t pfprot);
int remap_pfn_range(struct vm_area_struct *vma, ul addr, ul pfn, ul size, pgprot_prto);
int vm_iomap_memory(struct vm_area_struct *vma, phys_addr_t start, unsigned long len);
void unmap_mapping_range(struct address_space * mapping, loff_t const holebegin, loff_t const helolen, int even_cows);
int follow_pfn(struct vm_area_struct *vma, ul addres, ul *pfn);
void vm_unmap_aliases(void);
void vm_unmap_ram(const void *mem, ui count);
void *vm_map_ram(struct page **pages, ui count, int node, pgprot_t prot);
void unmap_kernel_rage_noflush(ul addr, ul size);
void unmap_kernel_range(ul addr, ul size);
void vfree(const void *addr);
void vunmap(const void *addr);
void *vmap(struct page **pages, ui count, ul flags, pgprot_t prot);
void *vmalloc(ul size);
void *vzalloc(ul size);
void *vmalloc_user(ul size);
void *vmalloc_node(ul size, int node);
void *vzalloc_node(ul size, int node);
void *vmalloc_32(ul size);
void *vmammlc_32_user(ul size);
int remap_vmalloc_range_partial(struct vm_area_struct * vma, ul uaddr, void *kaddr, ul size);
int remap_vmalloc_range(struct vm_area_struct * vma, void *addr, unsigned long pgoff);
struct vm_struct *alloc_vm_area(size_t size, pte_t **ptes);
unsigned long __get_pfnblock_flags_mask(struct page * page, unsigned long pfn, unsigned long end_bitidx, unsigned long mask);
void set_pfnblock_flags_mask(struct page * page, unsigned long flags, unsigned long pfn, unsigned long end_bitidx, unsigned long mask);
void *alloc_pages_exact_nid(int nid, size_t size, gfp_t gfp_mask);
ui nr_free_zone_pages(int offset);
ul nr_free_pagecache_pages(void);
int find_net_best_bode(int node, nodemask_t *user_node_mask);
void free_bootmem_with_active_regions(int nide, ul max_low_pfn);
void sparse_memory_present_with_active_regions(int nid);
void get_pfn_range_for_nid(ui nide, ul *start_pfn, ul *end_pfn);
ul absent_pages_in_range(unsigned long start_pfn, ul end_pfn);
ul node_map_pfn_alignment(void);
ul find_min_pfn_with_active_regions(void);
void free_area_init_nodes(unsigned long * max_zone_pfn);
void setup_per_zone_wmarks(void);
void set_dma_reserve(ul new_dma_reserve);
int alloc_config_range(ul start, ul end, usigned migratetype, gfp_t gfp_mask);
void mempool_destroy(mempool_t *pool);
mempool_t *mempool_create(int min_nr, mempool_alloc_t * alloc_fn, mempool_free_t * free_fn, void * pool_data);
int mempool_resize(mempool_t * pool,	int new_min_nr);
void *mempool_alloc(mempool_allocmempool_t * pool, gfp_t gfp_mask);
void mempool_free(void *element, mempool_t * pool);
struct dma_pool *dma_pool_create(const char * name, struct device * dev, size_t size, size_t align, size_t boundary);
void dma_pool_destroy(struct dma_pool *pool);
void *dma_pool_alloc(struct dma_pool *pool, gfp_t mem_flags, dma_addr_t *handle);
void dma_pool_free(struct dma_pool *pool, void *vaddr, dma_addr_t dma);
struct dma_pool *dmam_pool_create(const char *name, struct device *dev, size_t size, size_t align, size_t allocation);
void dmam_pool_destroy(struct dma_pool *pool);
void balance_dirty_pages_ratelimited(struct address_space *mapping);
void tag_pages_for_writeback(struct address_space *mapping, pgoff_t start, pgoff_t end);
int write_cache_pages(struct address *mapping, struct writeback_control *wbc, writepage_t writepage, void *data);
int generic_writepages(struct address_space *mapping, struct writeback_control *wbc);
int write_one_page(struct page *page, int wait);
void wait_for_stable_page(struct page *page);
void truncate_inode_pages_range(struct address_space * mapping, loff_t lstart, loff_t lend);
void truncate_inode_pages(struct address_space *mapping, loff_t lstart);
void truncate_inode_pages_final(struct address_space *mapping);
ul invalidate_mapping_pages(struct address_space * mapping, pgoff_t start, pgoff_t end);
int invalidate_inode_pages2_range(struct address_space *mapping,	pgoff_t start,	pgoff_t end);
int invalidate_inode_pages2(struct address_space *mapping);
void trucate_pagecache(struct inode *inode, loff_t newsize);
void truncate_setsize(struct inode *inode, loff_t newsize);
void pagecache_iszie_extended(struct inode *inode, loff_t from, loff_t to);
void truncate_pagecache_range(struct inode inode, loff_t lstart, loff_t lend);

