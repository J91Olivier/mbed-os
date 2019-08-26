/***************************************************************************//**
* \file CY8CKIT-062-WIFI-BT/cybsp.h
*
* Description:
* Provides APIs for interacting with the hardware contained on the Cypress
* CY8CKIT-062-WIFI-BT pioneer kit.
*
********************************************************************************
* \copyright
* Copyright 2018-2019 Cypress Semiconductor Corporation
* SPDX-License-Identifier: Apache-2.0
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*******************************************************************************/

#pragma once

#include "cybsp_api_core.h"
#if defined(CYBSP_WIFI_CAPABLE)
#include "cybsp_wifi_sdio.h"
#endif

#if defined(__cplusplus)
extern "C" {
#endif

/** \cond INTERNAL */

// HAL HW configuration data
extern cyhal_qspi_t cybsp_qspi;
extern cyhal_uart_t cybsp_bt_uart;
extern cyhal_uart_t cybsp_debug_uart;
extern cyhal_i2c_t cybsp_i2c;
extern cyhal_rtc_t cybsp_rtc;

/** \endcond */

#if defined(__cplusplus)
}
#endif

/** \} group_bsp_cy8ckit_062_wifi_bt */
