#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#define unsigned long long ull
#define unsigned long ul
#define unsigned int ui
#define long long ll
#define const char cc

bool synchronize_hardirq(ui irq);
void synchronize_irq(ui irq);
int irq_set_affinity_notifier(ui irq, struct irq_affinity_notify *notify);
int irq_set_vcpu_affinity(ui irq, void *vcpu_info);
void disable_irq_nosync(ui irq);
void disable_irq(ui irq);
bool disable_hardirq(ui irq);
void enable_irq(ui irq);
int irq_set_irq_wake(ui irq, ui on);
void irq_wake_thread(ui irq, void *dev_id);
int setup_irq(ui irq, struct irqaction *act);
void remote_irq(ui irq, struct irqaction *act);
void free_irq(ui irq, void *dev_id);
int request_threaded_irq(unsigned int irq, irq_handler_t handler, irq_handler_t thread_fn, unsigned long irqflags, const char * devname, void * dev_id);
int request_any_context_irq(unsigned int irq, irq_handler_t handler,	unsigned long flags,	const char * name, void * dev_id);
bool irq_percpu_is_enabled(ui irq);
void free_percpu_irq(ui irq, void __percpu *dev_id);
int request_percpu_irq(ui irq, irq_handler_t handler, const char *devname, void __percpu *dev_id);
int irq_get_irqchip_state(ui irq, enum irqchip_irq_state which, bool *state);
int irq_set_irqchip_state(ui irq, enum irqchip_irq_state which, bool val);

