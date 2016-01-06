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
 * @ingroup     peripherals
 * @{
 *
 * @brief       Definitions for generic digital pin io interface.
 * 
 * @author      Jon Pattison <jon@kubos.co>
 */
#ifndef PERIPH_DIO_H
#define PERIPH_DIO_H

#include "peripherals.h"

typedef enum {
	PDC_UNDEFINED,
	PDC_DIGITAL_IN,
	PDC_DIGITAL_OUT_PUSH_PULL,
	PDC_DIGITAL_OUT_OPEN_DRAIN
} pt_dio_pin_config_t;

typedef enum {
	PDR_NONE,
	PDR_PULL_UP,
	PDR_PULL_DOWN
} pt_dio_resistor_t;

typedef uint_t (*pf_dio_configure_pin_t)(peripheral_t *p, pt_dio_pin_config_t config, 
											pt_dio_resistor_t resistor);
											
typedef enum {
	PDI_RISING,
	PDI_FALLING,
	PDI_BOTH
} pt_dio_int_edge_t;

typedef void (*pf_dio_set_interrupt_edge_t)(peripheral_t *p, pt_dio_int_edge_t edge);

typedef enum {
	PDS_LOW,
	PDS_HIGH
} pt_dio_state_t;

typedef return_code_t (*pf_dio_set_pin_t)(peripheral_t *p, pt_dio_state_t state);
typedef pt_dio_state_t (*pf_dio_get_pin_t)(peripheral_t *p);

typedef struct peripheral_dio {
	peripheral_t base;
	pf_dio_configure_pin_t configure_pin;
	pf_dio_set_interrupt_edge_t set_interrupt_edge;
	pf_dio_set_pin_t set_pin;
	pt_dio_state_t get_pin;
} peripheral_dio_t;

#endif /* PERIPH_DIO_H */
/** @} */
