#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#define unsigned long long ull
#define unsigned long ul
#define unsigned int ui
#define long long ll
#define const char cc

int __pci_hp_register (__pci_hp_registerstruct hotplug_slot * slot, struct pci_bus * bus, int devnr, const char * name,		struct module * owner,	const char * mod_name);
int pci_hp_deregister (pci_hp_deregisterstruct hotplug_slot * slot);
int pci_hp_change_slot_info (pci_hp_change_slot_infostruct hotplug_slot * slot, struct hotplug_slot_info * info);

