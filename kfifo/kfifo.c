#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#define unsigned long long ull
#define unsigned long ul
#define unsigned int ui
#define long long ll
#define const char cc

DECLARE_KFIFO_PTR(fio, type);
DECLAR_KFIFO(fifo, type, size);
INIT_KFIFO(fifo);
DEFINE_KFIFO(fifo, type, size);
kfifo_initiazlized(fifo);
kfifo_esize(fifo);
kfifo_recsize(fifo);
kfifo_size(fifo);
kfifo_reset(fifo);
kfifo_reset_out(fifo);
kfifo_len(fifo);
kfifo_is_empty(fifo);
kfifo_is_full(fifo);
kfifo_avail(fifo);
kfifo_skip(fifo);
kfifo_peek_len(fifo);
kfifo_alloc(fifo, size, gfp_mask);
kfifo_free(fifo);
kfifo_init(fifo, buffer, size);
kfifo_put(fifo, val);
kfifo_get(fifo, val);
kfifo_peek(fifo, val);
kfifo_in(fifo, buf, n);
kfifo_in_spinlocked(fifo, buf, n, lock);
kfifo_out(fifo, buf, n);
kfifo_from_user(fifo, from, len, copied);
kfifo_out_spinlocked(fifo, buf, n, lock);
kfifo_to_user(fifo, to, len, copied);
kfifo_dma_in_prepare(fifo, sgl, nents, len);
kfifo_dma_in_finish(fifo, len);
kfifo_dma_out_prepare(fifo, sgl nents, len);
kfifo_dma_out_finish(fifo, len);
kfifo_out_peek(fifo, buf, n);
