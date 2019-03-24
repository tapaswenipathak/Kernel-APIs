#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#define unsigned long long ull
#define unsigned long ul
#define unsigned int ui
#define long long ll
#define const char cc

ssize_t edd_show_raw_data (edd_show_raw_datastruct edd_device * edev,		char * buf);
void edd_release (edd_releasestruct kobject * kobj);
int edd_dev_is_type (edd_dev_is_typestruct edd_device * edev, const char * type);
struct pci_dev * edd_get_pci_dev (edd_get_pci_devstruct edd_device * edev);
int edd_init (edd_initvoid);

