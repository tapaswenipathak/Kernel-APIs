#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#define unsigned long long ull
#define unsigned long ul
#define unsigned int ui
#define long long ll
#define const char cc

ull simple_strtoull(cc *cp, char ** endp, ui base);
ul simple_strtoul(cc *cp, char **endp, ui base);
long simple_strtol(cc *cp, char **endp, ui base);
ll simple_strtoll(cc*cp, char **endp, ui base);
int vsnprintf(char *buf, size_t size, cc *fmt, va_list args);
int vscnprintf(char *buf, size_t size, cc *fmt, va_list args);
int scnprintf(char *buf, size_t size, cc *fmt, ...);
int snprintf(char *buf, size_t size, cc *fmt, ...);
int vsprintf(char *buf, cc *fmt, va_list args);
int sprintf(char *buf, cc *fmt, ...);
int vbin_printf(u32 *bin_buf, size_t size, cc *fmt, va_list args);
int bstr_printf(char *buf, size_t size, cc *fmt, const u32 *bin_buf);
int bprintf(u32 *bin_buf, size_t size, cc *fmt, ...);
int vsscanf(cc *buf, cc *fmt, va_list args);
int sscanf(cc *buf, cc *fmt);
int kstrtol(cc *s, ui base, long *res);
int kstrtoul(cc *s, ui base, unsigned long *res);
int kstrtoull(cc *s, ui base, ull *res);
int kstrtoull(cc *s, ui base, ull *res);
int kstrtoll(cc *s, ui base, ll *res);
int kstrtouint(cc *s, ui base, ui *res);
int kstrtoint(cc *s, ui base, int *res);
int kstrtobool(cc *s, bool *res);

int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("%s", "input string is required parameter");
	}

	char *input_str = argv[1];



}
