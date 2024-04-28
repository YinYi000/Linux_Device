#include<linux/module.h>
#include<linux/init.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("YIN YI");
MODULE_DESCRIPTION("A HELLO WORLD");


static int __init ModuleInit(void){
	printk("Hello Kernel!\n");
	return 0;
}


static void __exit ModuleExit(void)
{
	printk("Good bye Kernel\n");
}

module_init(ModuleInit);
module_exit(ModuleExit);
