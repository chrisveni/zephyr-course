                                                       /*
 * Copyright (c) 2012-2014 Wind River Systems, Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */


#include <zephyr/kernel.h>
#include <zephyr/sys/printk.h>

static int board_init(void)
{
    printk("Board Initialized\n");
    return 0;
}
SYS_INIT(board_init, APPLICATION, CONFIG_APPLICATION_INIT_PRIORITY);

int main(void)
{
    printk("Hello World from new_board!\n");
    return 0;
}
