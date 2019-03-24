#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#define unsigned long long ull
#define unsigned long ul
#define unsigned int ui
#define long long ll
#define const char cc

void blk_delay_queue (blk_delay_queuestruct request_queue * q,	unsigned long msecs);
void blk_start_queue_async (blk_start_queue_asyncstruct request_queue * q);
void blk_start_queue (blk_start_queuestruct request_queue * q);
void blk_stop_queue (blk_stop_queuestruct request_queue * q);
void blk_sync_queue (blk_sync_queuestruct request_queue * q);
void __blk_run_queue_uncond (__blk_run_queue_uncondstruct request_queue * q);
void __blk_run_queue (__blk_run_queuestruct request_queue * q);
void blk_run_queue_async (blk_run_queue_asyncstruct request_queue * q);
void blk_run_queue (blk_run_queuestruct request_queue * q);
void blk_queue_bypass_start (blk_queue_bypass_startstruct request_queue * q);
void blk_queue_bypass_end (blk_queue_bypass_endstruct request_queue * q);
void blk_cleanup_queue (blk_cleanup_queuestruct request_queue * q);
struct request_queue * blk_init_queue (blk_init_queuerequest_fn_proc * rfn, spinlock_t * lock);
void part_round_stats (part_round_statsint cpu, struct hd_struct * part);
void blk_requeue_request (blk_requeue_requeststruct request_queue * q, struct request * rq);
blk_qc_t generic_make_request (generic_make_requeststruct bio * bio);
blk_qc_t submit_bio (submit_biostruct bio * bio);
int blk_insert_cloned_request (blk_insert_cloned_requeststruct request_queue * q, struct request * rq);
unsigned int blk_rq_err_bytes (blk_rq_err_bytesconst struct request * rq);
struct request * blk_peek_request (blk_peek_requeststruct request_queue * q);
void blk_start_request (blk_start_requeststruct request * req);
struct request * blk_fetch_request (blk_fetch_requeststruct request_queue * q);
bool blk_update_request (blk_update_requeststruct request * req, int error, unsigned int nr_bytes);
void blk_unprep_request (blk_unprep_requeststruct request * req);
bool blk_end_request (blk_end_requeststruct request * rq, int error, unsigned int nr_bytes);
void blk_end_request_all (blk_end_request_allstruct request * rq, int error);
bool blk_end_request_cur (blk_end_request_curstruct request * rq, int error);
bool blk_end_request_err (blk_end_request_errstruct request * rq, int error);
bool __blk_end_request (__blk_end_requeststruct request * rq, int error, unsigned int nr_bytes);
bool __blk_end_request_cur (__blk_end_request_curstruct request * rq, int error);
void __blk_end_request_all (__blk_end_request_allstruct request * rq, int error);
bool __blk_end_request_err (__blk_end_request_errstruct request * rq, int error);
void rq_flush_dcache_pages (rq_flush_dcache_pagesstruct request * rq);
int blk_lld_busy (blk_lld_busystruct request_queue * q);
void blk_rq_unprep_clone (blk_rq_unprep_clonestruct request * rq);
int blk_rq_prep_clone (blk_rq_prep_clonestruct request * rq, struct request * rq_src, struct bio_set * bs, gfp_t gfp_mask, int (*bio_ctr) (struct bio *, struct bio *, void *), void * data);
void blk_start_plug (blk_start_plugstruct blk_plug * plug);
void blk_pm_runtime_init (blk_pm_runtime_initstruct request_queue * q, struct device * dev);
int blk_pre_runtime_suspend (blk_pre_runtime_suspendstruct request_queue * q);
void blk_post_runtime_suspend (blk_post_runtime_suspendstruct request_queue * q, int err);
void blk_pre_runtime_resume (blk_pre_runtime_resumestruct request_queue * q);
void blk_post_runtime_resume (blk_post_runtime_resumestruct request_queue * q, int err);
void blk_set_runtime_active (blk_set_runtime_activestruct request_queue * q);
void __blk_drain_queue (__blk_drain_queuestruct request_queue * q, bool drain_all);
struct request * __get_request (__get_requeststruct request_list * rl, unsigned int op, struct bio * bio, gfp_t gfp_mask);
struct request * get_request (get_requeststruct request_queue * q, unsigned int op, struct bio * bio, gfp_t gfp_mask);
bool blk_attempt_plug_merge (blk_attempt_plug_mergestruct request_queue * q, struct bio * bio, unsigned int * request_count, struct request ** same_queue_rq);
int blk_cloned_rq_check_limits (blk_cloned_rq_check_limitsstruct request_queue * q, struct request * rq);
bool blk_end_bidi_request (blk_end_bidi_requeststruct request * rq, int error, unsigned int nr_bytes,		unsigned int bidi_bytes);
bool __blk_end_bidi_request (__blk_end_bidi_requeststruct request * rq, int error, ui nr_bytes, ui bidi_bytes);
int blk_rq_map_user_iov (blk_rq_map_user_iovstruct request_queue * q, struct request * rq, struct rq_map_data * map_data, const struct iov_iter * iter, gfp_t gfp_mask);
int blk_rq_unmap_user (blk_rq_unmap_userstruct bio * bio);
int blk_rq_map_kern (blk_rq_map_kernstruct request_queue * q, struct request * rq, void * kbuf, ui len, gfp_t gfp_mask);
void blk_release_queue (blk_release_queuestruct kobject * kobj);
void blk_queue_prep_rq (blk_queue_prep_rqstruct request_queue * q, prep_rq_fn * pfn);
void blk_queue_unprep_rq (blk_queue_unprep_rqstruct request_queue * q, unprep_rq_fn * ufn);
void blk_set_default_limits (blk_set_default_limitsstruct queue_limits * lim) ;
void blk_set_stacking_limits (blk_set_stacking_limitsstruct queue_limits * lim);
void blk_queue_make_request (blk_queue_make_requeststruct request_queue * q,	make_request_fn * mfn);
void blk_queue_bounce_limit (blk_queue_bounce_limitstruct request_queue * q, u64 max_addr);
void blk_queue_max_hw_sectors (blk_queue_max_hw_sectorsstruct request_queue * q, unsigned int max_hw_sectors);
void blk_queue_chunk_sectors (blk_queue_chunk_sectorsstruct request_queue * q, unsigned int chunk_sectors);
void blk_queue_max_discard_sectors (blk_queue_max_discard_sectorsstruct request_queue * q, unsigned int max_discard_sectors);
void blk_queue_max_write_same_sectors (blk_queue_max_write_same_sectorsstruct request_queue * q,	unsigned int max_write_same_sectors);
void blk_queue_max_write_zeroes_sectors (blk_queue_max_write_zeroes_sectorsstruct request_queue * q, unsigned int max_write_zeroes_sectors);
void blk_queue_max_segments (blk_queue_max_segmentsstruct request_queue * q,	unsigned short max_segments);
void blk_queue_max_discard_segments (blk_queue_max_discard_segmentsstruct request_queue * q,	unsigned short max_segments);
void blk_queue_max_segment_size (blk_queue_max_segment_sizestruct request_queue * q, unsigned int max_size);
void blk_queue_logical_block_size (blk_queue_logical_block_sizestruct request_queue * q,	unsigned short size);
void blk_queue_physical_block_size (blk_queue_physical_block_sizestruct request_queue * q,	unsigned int size);
void blk_queue_alignment_offset (blk_queue_alignment_offsetstruct request_queue * q,	unsigned int offset);
void blk_limits_io_min (blk_limits_io_minstruct queue_limits * limits, unsigned int min);
void blk_queue_io_min (blk_queue_io_minstruct request_queue * q,	unsigned int min);
void blk_limits_io_opt (blk_limits_io_optstruct queue_limits * limits, unsigned int opt);
void blk_queue_io_opt (blk_queue_io_optstruct request_queue * q,	unsigned int opt);
void blk_queue_stack_limits (blk_queue_stack_limitsstruct request_queue * t,	struct request_queue * b);
int blk_stack_limits (blk_stack_limitsstruct queue_limits * t,	struct queue_limits * b,	sector_t start);
int bdev_stack_limits (bdev_stack_limitsstruct queue_limits * t, struct block_device * bdev, sector_t start);
void disk_stack_limits (disk_stack_limitsstruct gendisk * disk, struct block_device * bdev, sector_t offset);
void blk_queue_dma_pad (blk_queue_dma_padstruct request_queue * q, ui mask);
void blk_queue_update_dma_pad (blk_queue_update_dma_padstruct request_queue * q, ui mask);
int blk_queue_dma_drain (blk_queue_dma_drainstruct request_queue * q, dma_drain_needed_fn * dma_drain_needed, void * buf, ui size);
void blk_queue_segment_boundary (blk_queue_segment_boundarystruct request_queue * q, ui mask);
void blk_queue_virt_boundary (blk_queue_virt_boundarystruct request_queue * q, ul mask);
void blk_queue_dma_alignment (blk_queue_dma_alignmentstruct request_queue * q, int mask);
void blk_queue_update_dma_alignment (blk_queue_update_dma_alignmentstruct request_queue * q, int mask);
void blk_set_queue_depth (blk_set_queue_depthstruct request_queue * q, ui depth);
void blk_queue_write_cache (blk_queue_write_cachestruct request_queue * q, bool wc, bool fua);
void blk_execute_rq_nowait (blk_execute_rq_nowaitstruct request_queue * q, struct gendisk * bd_disk, struct request * rq, int at_head, rq_end_io_fn * done);
int blk_execute_rq (blk_execute_rqstruct request_queue * q,  struct gendisk * bd_disk, struct request * rq,		int at_head);
int blkdev_issue_flush (blkdev_issue_flushstruct block_device * bdev,		gfp_t gfp_mask, sector_t * error_sector);


