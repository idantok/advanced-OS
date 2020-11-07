#include <linux/init.h>
#include <linux/module.h>
#include "api.h"


void api_call(void)
{
printk(KERN_INFO "api_call called\n");
}

 static int __init hello_init(void)
{
     api_call();
     return 0;
}

static void __exit hello_exit(void)
{
    api_call();
}


module_init(hello_init);
module_exit(hello_exit);

EXPORT_SYMBOL_GPL(api_call);

   
MODULE_LICENSE("GPL");
MODULE_AUTHOR("IDAN TOKAYER");
MODULE_DESCRIPTION("INDEPENDENT MODULE");
MODULE_VERSION("0.0.1");
