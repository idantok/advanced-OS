#include <linux/init.h>
#include <linux/module.h>
#include "modules.h"


void do_somthing_exit(void){

printk(KERN_WARNING "the module has been removed");

}


EXPORT_SYMBOL_GPL(do_somthing_exit);

