#include <linux/init.h>
#include <linux/module.h>
#include <linux/printk.h>
#include <linux/moduleparam.h>

#include "hello1.h"

static uint count = 1;
module_param(count, uint, 0644);
MODULE_PARM_DESC(count, "Number of 'Hello, world!' messages to print");

static int __init hello2_init(void)
{
    uint i;

    pr_info("Module hello2 loaded\n");

    if (count == 0 || (count >= 5 && count <= 10)) {
        pr_warn("hello2: invalid count=%u, continuing anyway\n", count);
    } else if (count > 10) {
        pr_err("hello2: too large count=%u\n", count);
        return -EINVAL;
    }

    for (i = 0; i < count; i++) {
        print_hello();
    }

    return 0;
}

static void __exit hello2_exit(void)
{
    pr_info("Module hello2 unloaded\n");
}

module_init(hello2_init);
module_exit(hello2_exit);
