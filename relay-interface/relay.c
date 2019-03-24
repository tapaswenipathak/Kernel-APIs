#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#define unsigned long long ull
#define unsigned long ul
#define unsigned int ui
#define long long ll
#define const char cc

int relay_buf_full(struct rchan_buf *buf);
void relay_reset(struct rchar *chan);
struct rchan *relay_open(const char * base_filename, struct dentry * parent, size_t subbuf_size,	size_t n_subbufs, struct rchan_callbacks * cb, void * private_data);
int relay_late_setup_files(struct rchan * chan, const char * base_filename, struct dentry * parent);
size_t relay_switch_subbuf(struct rchan_buf * buf,	size_t length);
void relay_subbufs_consumed(struct rchan * chan, unsigned int cpu, size_t subbufs_consumed);
void relay_close(struct rchan *chan);
int relay_mmap_buf(struct rchan_buf * buf,	struct vm_area_struct * vma);
void *relay_alloc_buf(struct rchan_buf * buf, size_t size);
struct rchan_buf *relay_create_buf(struct rchan *chan);
void relay_destroy_channel(struct kref *kref);
void relay_destroy_buf(struct rchan_buf *buf);
void relay_remove_buf(struct kref *kref);
int relay_buf_empty(struct rchan_buf *buf);
void wakeup_readers(struct irq_work *work);
void __relay_reset(struct rchan_buf *buf, unsigned int init);
void relay_close_buf(struct rchan_buf *buf);
int relay_file_open(struct inode *inode, struct file *filp);
int relay_file_mmap(strut file *filp, struct vm_area_struct *vma);
unsigned int relay_file_poll(struct file *filp, poll_table *wait);
int relay_file_release(struct inode *inode, struct file *filp);
size_t relay_file_Read_subbuf_avail(size_t read_pos, struct rchan_buf *buf);
size_t relay_file_read_start_pos(size_t read_pos, struct rchan_buf *buf);
size_t relay_file_read_end_pos(struct rchan_buf *buf, size_t read_pos, size_t count);

