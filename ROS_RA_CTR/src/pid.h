/*
 * Copyright (c) 2006-2021, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2022-11-29     Yifang       the first version
 */
#ifndef SRC_PID_H_
#define SRC_PID_H_

#include "pwm_config.h"
#include "controller.h"
#include "uart_raspi.h"
#include "encoder_cb.h"

int pid_init(void);

#endif /* SRC_PID_H_ */
