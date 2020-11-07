#include <linux/init.h>
#include <linux/module.h>
#include "api.h"


 static int __init hello_init(void)
 {
    int i;
    void api_call(void);
    //  call api_call 10 times
    for (i=0;i<10;i++)
    {
        api_call();
        printk(KERN_INFO "adter api_all called %d\n",i);
    }
    return 0;
 }

static void __exit hello_exit(void)
{
}


module_init(hello_init);
module_exit(hello_exit);
   


MODULE_LICENSE("GPL");
MODULE_AUTHOR("IDAN TOKAYER");
MODULE_DESCRIPTION("DEPENDENT MODULE");
MODULE_VERSION("0.0.1");

