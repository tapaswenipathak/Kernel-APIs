#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#define unsigned long long ull
#define unsigned long ul
#define unsigned int ui
#define long long ll
#define const char cc

long sys_acct (sys_acctconst char __user * name);
void acct_collect (acct_collectlong exitcode, int group_dead);
void acct_process (acct_processvoid);

int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("%s", "Please input file name(sys_acct) or process id(acct_process) to implement process accounting");
		perror("Add required arguments");
	}

	int ret = sys_acct(argv[1]);
	if(!ret)
	{
		printf ("%u", ret);
	}
	return 0;
}
