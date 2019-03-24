#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#define unsigned long long ull
#define unsigned long ul
#define unsigned int ui
#define long long ll
#define const char cc

void _bitmap_shift_right(ul *dst, cul *src, unsigned shift, unsigned nbits);
void __bitmap_shift_left(ul *dst, cul *src, ui shift, ui nbits);
ul bitmap_find_next_zero_area_off(ul *map, ul size, ul start, ui nr, ul align_mask, ulalign_offset);
int __bimap_parse(cc *buf, ui buflen, int is_user, ul *maskp, int nmaskbits);
int bitmap_parse_user(cc __user *buf, ui ulen, ul *maskp, int nmaskbits);
int bitmap_print_to_pagebuf(bool list, char *buf, const ul *maskp, int nmaskbits);
int bitmap_parselist_user(const char __user *ubuf, usigned int ulen, ul *maskp, int nmaskbits);
void bitmap_remap(ul *dst, const ul *src, const ul *prev, const ul *new, ui nbits);
int bitmap_bitremap(int prevbit, const ul *prev, const ul *new, int bits);
void bitmap_onto(ul	*dst, const ul *orig, const ul *relmap, ui bits);
void bitmap_fold(ul *dst, const ul *orig, ui sz, ui nbits);
int bitmap_find_free_region(ul *bitmap, ui bits, int order);
void bitmap_release_region(ul *bitmap, ui pos, int order);
int bitmap_allocate_region(ul *bitmap, ui pos, int order);
ui bitmap_from_u32array(ul *bitmap, ui nbits, const u32 *buf, unsigned int nwords);
ui bitmap_to_u32array(u32 *buf, ui nwords, const ul *bitmap, ui nbits);
void bitmap_copy_le(ul *dst, const ul *src, ui nbits);
int __bitmap_parselist(cc *buf, ui buflen, int is_user, ul *maskp, int bmaskbits);
int bitmap_pos_to_ord(const ul *buf, ui pos, ui nbits);
ui bitmap_ord_to_pos(const ul *buf, ui ord, ui nbits);

