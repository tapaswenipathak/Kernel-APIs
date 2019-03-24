#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#define unsigned long long ull
#define unsigned long ul
#define unsigned int ui
#define long long ll
#define const char cc

u8 crc7_be(u8 crc, const u8 *buffer, size_t len);
u16 crc16(u16 crc, u8 const *buffer, size_t len);
u16 crc_itu_t(u16 crc, const u8 *buffer, size_t len);
u16 crc_ccitt(u16crc, u8 const *buffer, size_t len);
