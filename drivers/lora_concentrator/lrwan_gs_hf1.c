/*
 * Copyright (c) 2020 Mark Olsson <mark@markolsson.se>
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#define DT_DRV_COMPAT risinghf_lrwan_gs_hf1

#include <drivers/gpio.h>
#include <drivers/lora_concentrator.h>
#include <drivers/spi.h>
#include <zephyr.h>

#define LOG_LEVEL CONFIG_LORA_LOG_LEVEL
#include <logging/log.h>
LOG_MODULE_REGISTER(lrwan_gs_hf1);

#define GPIO_RESET_PIN		DT_INST_GPIO_PIN(0, reset_gpios)
#define GPIO_CS_PIN		DT_INST_SPI_DEV_CS_GPIOS_PIN(0)
#define GPIO_CS_FLAGS		DT_INST_SPI_DEV_CS_GPIOS_FLAGS(0)

static int lrwan_gs_hf1_lora_concentrator_init(const struct device *dev)
{
	return 0;
}

static const struct lora_concentrator_driver_api lrwan_gs_hf1_lora_concentrator_api = {
};

DEVICE_AND_API_INIT(lrwan_gs_hf1_lora_concentrator, DT_INST_LABEL(0),
		    &lrwan_gs_hf1_lora_concentrator_init, NULL,
		    NULL, POST_KERNEL, CONFIG_LORA_CONCENTRATOR_INIT_PRIORITY,
		    &lrwan_gs_hf1_lora_concentrator_api);
