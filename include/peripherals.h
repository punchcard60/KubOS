/*
 * KubOS
 * Copyright (C) 2015 Kubos Corporation
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
 */

/**
 * @defgroup     peripherals
 * @ingroup     peripherals
 * @{
 *
 * @brief       Definitions for generic peripheral interface.
 * 
 * @author      Jon Pattison <jon@kubos.co>
 */
#ifndef PERIPHERALS_H
#define PERIPHERALS_H

#include <sys_types.h>

typedef enum {
    PT_ADC,
    PT_CAN_BUS,
    PT_DAC,
    PT_DIGITAL_CAMERA,
    PT_DISPLAY_CNTRL,
    PT_ETHERNET,
    PT_GPIO,
    PT_I2C,
    PT_MEM_CNTRL,
    PT_PWM,
    PT_SERIAL_AUDIO,
    PT_SPI,
    PT_TIMER,
    PT_UART,
    PT_USART,
    PT_USB,
    PT_USIO,
    PT_VOLT_COMPARE,
    PT_VOLT_REF
} peripheral_type_t;

/**
 * @brief peripheral id number.
 */
typedef uint_t peripheral_id_t;

/**
 * @brief peripheral exception codes.
 */
typedef enum {
    PE_NO_CONNECT    
} peripheral_exception_t;

/**
 * @brief peripheral device base interface.
 *
 */
typedef struct peripheral_ {
    peripheral_type_t type;
    peripheral_id_t id;
    return_code_t (*send_data)(struct peripheral_* p, uint_t size, uint_t bufferid, uint8_t* data);
    return_code_t (*receive_data)(struct peripheral_* p, uint_t size, uint_t bufferid, uint8_t* data);
    void (*receive_buffer_full)(struct peripheral_* p, uint_t bufferid);
    void (*xmit_buffer_empty)(struct peripheral_* p, uint_t bufferid);
    void (*exception_callback)(struct peripheral_* p, peripheral_exception_t exceptioncode);
} peripheral_t;

/**
 * @brief peripheral pin states.
 *
 */
typedef enum {
	PPS_LOW,
	PPS_HIGH
} peripheral_pin_state_t;

#endif /* PERIPHERALS_H */
/** @} */
