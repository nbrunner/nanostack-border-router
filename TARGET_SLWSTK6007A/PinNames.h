/***************************************************************************//**
 * @file PinNames.h
 *******************************************************************************
 * @section License
 * <b>(C) Copyright 2015 Silicon Labs, http://www.silabs.com</b>
 *******************************************************************************
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 ******************************************************************************/

/* MBED TARGET LIST: SLWSTK6007A */

#ifndef MBED_PINNAMES_H
#define MBED_PINNAMES_H

#include "CommonPinNames.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    EFM32_STANDARD_PIN_DEFINITIONS,

    /* Starter Kit says LED0 and LED1, but mbed expects 1 and 2. This way using 1 and 2 or 0 and 1 will work. */
    LED0 = PF4,
    LED1 = PF5,
    LED2 = LED0,
    LED3 = LED0,
    LED4 = LED1,

    /* Push Buttons */
    SW0 = PF6,
    SW1 = PF7,
    BTN0 = SW0,
    BTN1 = SW1,
    // Standardized button names
    BUTTON1 = BTN0,
    BUTTON2 = BTN1,

    /* Expansion headers */
    EXP3  = PD8,
    EXP4  = PC0,
    EXP5  = PD9,
    EXP6  = PC1,
    EXP7  = PD10,
    EXP8  = PC2,
    EXP9  = PD11,
    EXP10 = PC3,
    EXP11 = PD12,
    EXP12 = PC4,
    EXP13 = PC9,
    EXP14 = PC5,
    EXP15 = PC10,
    EXP16 = PC11,

    /* Serial (just some usable pins) */
    SERIAL_TX   = PF0,
    SERIAL_RX   = PF1,

    /* Board Controller UART (USB)*/
    CONSOLE_TX       = PA0,
    CONSOLE_RX       = PA1,
    ENABLE_VCOM      = PA5,

    /* Board Controller */
#if defined(MBED_CONF_TARGET_STDIO_UART_TX)
    STDIO_UART_TX   = MBED_CONF_TARGET_STDIO_UART_TX,
#else
    STDIO_UART_TX   = CONSOLE_TX,
#endif
#if defined(MBED_CONF_TARGET_STDIO_UART_RX)
    STDIO_UART_RX   = MBED_CONF_TARGET_STDIO_UART_RX,
#else
    STDIO_UART_RX   = CONSOLE_RX
#endif
} PinName;

#ifdef __cplusplus
}
#endif

#endif
