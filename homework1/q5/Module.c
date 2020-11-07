#include <linux/init.h>
#include <linux/module.h>
#include <linux/moduleparam.h>
#include <linux/delay.h>

#define DEFUALT_NUM 2;

static char *whom= "NoName";
module_param(whom,charp,S_IRUGO);
MODULE_PARM_DESC(whom,"an string");

static int howmany = DEFUALT_NUM;
module_param(howmany,int,S_IRUGO);
MODULE_PARM_DESC(howmany,"an int");



 static int __init hello_init(void)
 {

     int i;
       for(i=0;i<howmany;i++){
           printk(KERN_INFO "(%d)Hello,%s\n",i,whom);
                      howmany++;
           msleep(2000);
       }
     return 0;
 }

static void __exit hello_exit(void)
{
    return;
}


module_init(hello_init);
module_exit(hello_exit);
   


MODULE_LICENSE("GPL");
MODULE_AUTHOR("IDAN TOKAYER");
MODULE_DESCRIPTION("PARAM MODULE");
MODULE_VERSION("0.0.1");

