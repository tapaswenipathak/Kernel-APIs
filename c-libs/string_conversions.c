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

char msg_array[90];

char *vsnprintf_implementation(char *format, ...)
{
	va_list arglist;
	va_start(arglist, format);
	strcpy(msg_array, "Message Array:");
	vsnprintf(&msg_array[1], 90, format, arglist);
	int vscnprintf_val = vscnprintf(res, sizeof(val), fmt, args);
	printf("%d Number of characters written in res are:", vscnprintf_val);
	va_end(arglist);
	return(msg_array);
}

int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("%s", "input string is required parameter");
	}

	char *input_str = argv[1];

	ull simple_strtoull_val = simple_strtoull(input_str, null, 0);
	printf("%llud\n", simple_strtoull_val);

	ul simple_strtoul_val = simple_strtoul(input_str, null, 0);
	printf("%lud\n", simple_strtoull_val);

	long simple_strtol_val = simple_stroul(input_str, null, 0);
	printf("%ld\n", simple_stroul_val);

	ll simple_strtoll_val = simple_strtoll(input_str, null, 0);
	printf("%lld\n", simple_strtoll_val);

	char *msg;
	msg = vsnprintf_implementation("%s %d %s", "vsnprintf", 100, "times");
	printf("%s\n", msg);

	int snprintf_val = snprintf(res, len(res), "this is a program");
	printf("%d\n", snprintf_val);

	int bprintf_val = bprintf(res, len(res), fmt, ...);
	printf("%d\n", bprintf_val);

	long kstrtol_val = kstrtol(res, 10, &value);
	printf("%ld", kstrtol_val);

	ul kstrtoul_val = kstrtoul(res, 1, &val);
	printf("%ul\n", kstrtoul);

	ull kstrtoull_val = kstrtoull_val(res, 1, &val);
	printf("%ull\n", kstrtoull);

	ll kstrtoll_val = kstrtoll(res, 1, &val);
	printf("%lld\n", kstrtoll_val);

	ui ksrtouint_val = ksrtouint(res, 1, &val);
	printf("%ui\n", ksrtouint_val);

	int kstrtoint_val = kstrtoint(res, 1, &val);
	printf("%d", kstroint_val);


	return 0;
}
