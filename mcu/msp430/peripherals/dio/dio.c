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
 * @brief       Generic digital pin io driver.
 *
 * @author      Jon Pattison <jon@kubos.co>
 */
#include <dio.h>

uint_t dio_configure_pin(peripheral_t *periph, pt_dio_pin_config_t config, pt_dio_resistor_t resistor) {

return 0;	/* $$$ Not Implemented */
}

void dio_set_interrupt_edge(peripheral_t *periph, pt_dio_int_edge_t edge) {
	/* $$$ Not Implemented */
}

void dio_set_pin(peripheral_t *periph, pt_dio_state_t state) {
	/* $$$ Not Implemented */
}

pt_dio_state_t dio_get_pin(peripheral_t *periph) {

return PDS_LOW;	/* $$$ Not Implemented */
}

/** @} */
