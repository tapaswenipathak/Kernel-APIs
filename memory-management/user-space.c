#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#define unsigned long long ull
#define unsigned long ul
#define unsigned int ui
#define long long ll
#define const char cc

ul __copy_to_user_inatomic(void __user *to, const void *from, ul n);
ul __copy_to_user(void __user *to, const void *from, ul n);
ul __copy_from_user(void *to, const void __user *from, ul n);
ul clear_user(void __user *to, ul n);
ul __clear_user(void __user *to, ul n);

