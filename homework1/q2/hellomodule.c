#include <linux/init.h>
#include <linux/module.h>

static int __init hello_init(void){
    printk(KERN_ALERT "this is KERN_ALERT message");
    printk(KERN_CRIT "this is KERN_CRIT message");
    printk(KERN_EMERG "this is KERN_EMERG message");
    printk(KERN_ERR "this is KERN_ERR message");
    printk(KERN_WARNING "this is KERN_WARRNIG message");
    printk(KERN_NOTICE "this is KERN_NOTICE message");
    printk(KERN_INFO "this is KERN_INFO message");
    printk(KERN_DEBUG "this is KERN_DEBUG message");
    printk(KERN_DEBUG "this is KERN_BUG message");
    printk(FW_WARN "this is FW_WARN message");
    printk(FW_BUG "this is FW_BUG message");
    printk(FW_INFO "this is FW_INFO message");
    printk(HW_ERR "this is HW_ERR message");
    return 0;
}

static void __exit hello_exit(void)
{
     printk(KERN_ALERT "the module has been removed");
}


module_init(hello_init);
module_exit(hello_exit);



MODULE_LICENSE("GPL");
MODULE_AUTHOR("IDAN TOKAYER");
MODULE_DESCRIPTION("HELLO MODULE EXAMPLE");
MODULE_VERSION("0.0.1");