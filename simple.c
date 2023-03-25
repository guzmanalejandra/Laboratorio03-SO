#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/list.h>

int simple_init(void) {
	printk(KERN_INFO "Loading module\nHola Mor!");
	return 0;
}

void simple_exit(void) {
	printk(KERN_INFO "Remving module\nQUE HACEMOS BEBEEEEE");
}

module_init(simple_init);
module_exit(simple_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Not used module");
MODULE_AUTHOR("Ale Guzman");
