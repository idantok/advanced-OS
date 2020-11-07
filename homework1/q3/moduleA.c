#include <linux/init.h>
#include <linux/module.h>
#include "modules.h"


void do_somthing_init(void){

printk(KERN_WARNING "the module has been started");

}
EXPORT_SYMBOL_GPL(do_somthing_init);

