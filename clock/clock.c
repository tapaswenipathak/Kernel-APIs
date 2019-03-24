#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#define unsigned long long ull
#define unsigned long ul
#define unsigned int ui
#define long long ll
#define const char cc

struct clk_notifier {
  struct clk * clk;
  struct srcu_notifier_head notifier_head;
  struct list_head node;
};
long clk_get_accuracy (clk_get_accuracystruct clk * clk);
int clk_set_phase (clk_set_phasestruct clk * clk, int degrees);
int clk_get_phase (clk_get_phasestruct clk * clk);
bool clk_is_match (clk_is_matchconst struct clk * p, const struct clk * q);
int clk_prepare (clk_preparestruct clk * clk);
void clk_unprepare (clk_unpreparestruct clk * clk);
struct clk * clk_get (clk_getstruct device * dev, cc *id);
struct clk * devm_clk_get (devm_clk_getstruct device * dev, cc *id);
struct clk * devm_get_clk_from_child (devm_get_clk_from_childstruct device * dev,		struct device_node * np, const char * con_id);
int clk_enable (clk_enablestruct clk * clk);
void clk_disable (clk_disablestruct clk * clk);
unsigned long clk_get_rate (clk_get_ratestruct clk * clk);
void clk_put (clk_putstruct clk * clk);
void devm_clk_put (devm_clk_putstruct device * dev,		struct clk * clk);
long clk_round_rate (clk_round_ratestruct clk * clk, ul rate);
int clk_set_min_rate (clk_set_min_ratestruct clk * clk, ul rate);
struct clk * clk_get_sys (clk_get_sysconst char * dev_id, const char * con_id);

