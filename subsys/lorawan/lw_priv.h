/*
 * Copyright (c) 2020 Andreas Sandberg
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef ZEPHYR_SUBSYS_LORAWAN_LW_PRIV_H_
#define ZEPHYR_SUBSYS_LORAWAN_LW_PRIV_H_

const int lorawan_status2errno(int status);
const char *lorawan_status2str(int status);

const int lorawan_eventinfo2errno(int status);
const char *lorawan_eventinfo2str(int status);

#endif /* ZEPHYR_SUBSYS_LORAWAN_LW_PRIV_H_ */
