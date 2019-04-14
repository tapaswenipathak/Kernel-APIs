#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#define unsigned long long ull
#define unsigned long ul
#define unsigned int ui
#define long long ll
#define const char cc
#define const void cv

int strncasecmp(cc *s1, cc *s2, size_t len);
char *strcpy(char *dest, cc *src);
char *strncpy(char *dest, cc *src, size_t count);
size_t strlcpy(char *dest, cc *src, size_t size);
ssize_t strscpy(char *dest, cc *src, size_t count);
char *strcat(char *dest, cc *src);
char *strncat(char *dest, cc *src, size_t count);
size_t strlcat(char *dest, cc *src, size_t count);
int strcmpy(cc *cs, cc *ct);
int strncmp(cc *cs, cc *ct, size_t count);
char *strchr(cc *s, int c);
char *strchrnul(cc *s, int c);
char *strnchr(cc *s, size_t count, int c);
char *strrchr(cc *s, int c);
char *skip_spaces(cc *str);
char *strim(char *s);
size_t strlen(const char *s);
size_t strnlen(cc *s, size_t count);
size_t strspn(cc *s, cc *accept);
char *strbrk(cc *cs, cc *ct);
char *strsep(char **s, cc *ct);
bool sysfs_streq(cc *s1, cc *s2);
int match_string(cc *const *array, size_t n, cc *string);
void *memset (void *s, int c, size_t count);
void memzero_explicit(void *s, size_t count);
void *memcpy(void *dest, const void *src, size_t count);
void *memmove(void *dest, const void *src, size_t count);
__visible int memcmp(cv *cs, cv *ct, size_t count);
void *memscan(void *addr, int c, size_t size);
char *strstr(const char *s1, cc *s2);
char *strnstr(cc *s1, cc *s2, size_t len);
void *memchr(const void *s, int c, size_t n);
void *memchr_inv(cv *start, int c, size_t bytes);
char *strreplace(char *s, char old, char new);

int main(int argc, char *argv[])
{
	if (argc < 2){
		printf("%s", "Please enter more than strings and count");
	}

	if (strncasecmp(argv[1], argv[2], argv[3])){
		printf("Executing strncasecmp %d", res_strncasecmp_val);
	}

	res_strreplace_val = strreplace(argv[1], argv[2]);
	printf("Executing strreplace %d", res_strreplace_val);

	res_memchar_inv_val = memchr_inv(argv[1], argv[2]);
	printf("Executing memchar_inv %d", res_memchar_inv_val);

	res_strnstr_val = strnstr_val(argv[1], argv[2]);
	printf("Executing strnsrt val %d", res_strnstr_val);

	res_strstr_val = strstr(argv[1], argv[2]);
	printf("Executing strstr %d", res_strstr);


	return 0;
}
