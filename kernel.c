/* 
https://tldp.org/LDP/lkmpg/2.6/html/lkmpg.html#AEN121
https://stackoverflow.com/questions/22632713/how-to-write-a-simple-linux-device-driver
https://www.apriorit.com/dev-blog/645-lin-linux-wi-fi-driver-tutorial-how-to-write-simple-linux-wireless-driver-prototype
https://www.linuxjournal.com/article/2476
https://www.oreilly.com/library/view/linux-device-drivers/0596005903/ch17.html 
*/

/*  
 *  hello-1.c - The simplest kernel module.
 */
#include <linux/module.h>	/* Needed by all modules */
#include <linux/kernel.h>	/* Needed for KERN_INFO */

int init_module(void)
{
	printk(KERN_INFO "Hello world 1.\n");

	/* 
	 * A non 0 return means init_module failed; module can't be loaded. 
	 */
	return 0;
}

void cleanup_module(void)
{
	printk(KERN_INFO "Goodbye world 1.\n");
}
