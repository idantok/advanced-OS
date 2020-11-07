

#include <linux/init.h>
#include <linux/module.h>
#include "modules.h"
#include "moduleA.c"
#include "moduleB.c"

static int __init hello_init(void){
    do_somthing_init();
    return 0;
}

static void __exit hello_exit(void)
{
    do_somthing_exit();
}



module_init(hello_init);
module_exit(hello_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("IDAN TOKAYER");
MODULE_DESCRIPTION("HELLO MODULE EXAMPLE");
MODULE_VERSION("0.0.1");