/* linux/arch/arm/plat-samsung/dev-hwmon.c
 *
 * Copyright 2008 Simtec Electronics
 *	Ben Dooks <ben@simtec.co.uk>
 *	http://armlinux.simtec.co.uk/
 *
 * Adapted for HWMON by Maurus Cuelenaere
 *
 * Samsung series device definition for HWMON
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#include <linux/kernel.h>
#include <linux/platform_device.h>

#include <plat/devs.h>
#include <plat/hwmon.h>

struct platform_device s3c_device_hwmon = {
	.name		= "s3c-hwmon",
	.id		= -1,
	.dev.parent	= &s3c_device_adc.dev,
};

void __init s3c_hwmon_set_platdata(struct s3c_hwmon_pdata *pd)
{
	s3c_set_platdata(pd, sizeof(struct s3c_hwmon_pdata),
			 &s3c_device_hwmon);
}
