#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#define unsigned long long ull
#define unsigned long ul
#define unsigned int ui
#define long long ll
#define const char cc
#define volatile unsigned long vul

void set_bit(long nr, vul *addr);
void __set_bit(long nr, vul *addr);
void clear_bit(long nr, vul *addr);
void __change_bit(long nr, vul *addr);
void change_bit(long nr, vul *addr);
bool test_and_set_bit(long nr, vul *addr);
bool test_and_set_bit_lock(long nr, vul *addr);
bool __test_and_set_bit(long nr, vul *addr);
bool test_and_clear_bit(long nr, vul *addr);
bool __test_and_clear_bit(long nr, vul *addr);
bool test_and_change_bit(long nr, vul *addr);
bool test_bit(int nr, const vul *addr);
ul __ffs(ul word);
ul ffz(ul word);
int ffs(int x);
int fls(int x);
int fls64(__u64 x);

