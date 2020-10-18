#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

typedef unsigned long long ull;
typedef unsigned long ul;
typedef unsigned int ui;
typedef long long ll;

/*
 * \typedef cc defined a short form of const char type
 */
typedef const char cc;


/*
 * \fn sys_acct enabled/disables accounting.
 * \var name of the variable (Input parameter)
 * \var ret value of function
 */

long sys_acct (sys_acctconst char __user * name);

/*
 * \fn acct_collect collect accounting information into pacct_struct
 * \var code and group value
 * \ret null
 */
void acct_collect (acct_collectlong exitcode, int group_dead);

/*
 * \fn acct_process handles process accounting for an completing task
 */
void acct_process (acct_processvoid);

/*
 * \fn main
 * \var argc is number of arguments
 * \var argv is variable number of arguments values
 * \ret completion value
 */

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
