#include <linux/init.h>
#include <linux/module.h>

static int __init hello_init(void){
    printk(KERN_ALERT "the module has been strted");
    return 0;

}

static void __exit hello_exit(void)
{
     printk(KERN_ALERT "the module has been removed");
}
//s

module_init(hello_init);
module_exit(hello_exit);



MODULE_LICENSE("GPL");
MODULE_AUTHOR("IDAN TOKAYER");
MODULE_DESCRIPTION("HELLO MODULE EXAMPLE");
MODULE_VERSION("0.0.1");