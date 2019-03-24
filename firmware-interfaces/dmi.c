#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#define unsigned long long ull
#define unsigned long ul
#define unsigned int ui
#define long long ll
#define const char cc

int dmi_check_system (	const struct dmi_system_id * list);
const struct dmi_system_id * dmi_first_match (	const struct dmi_system_id * list);
const char * dmi_get_system_info (	int field);
int dmi_name_in_vendors (	const char * str);
const struct dmi_device * dmi_find_device (	int type, const char * name, const struct dmi_device * from);
bool dmi_get_date (	int field, 	int * yearp, int * monthp, int * dayp);
int dmi_walk (	void (*decode) (const struct dmi_header *, void *), 	void * private_data);
bool dmi_match (	enum dmi_field f, 	const char * str);

