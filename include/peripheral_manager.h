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
 * @ingroup     subsystems
 * @{
 *
 * @brief       Definitions for generic peripheral manager subsystem interface.
 * 
 * @author      Jon Pattison <jon@kubos.co>
 */
#ifndef PERIPHERAL_MANAGER_H
#define PERIPHERAL_MANAGER_H

/**
 * @brief Allocate a peripheral device
 *
 * @param[in] peripheral_type   the type of the requested peripheral
 * @param[in] instance          the instance number of the requested peripheral
 *
 * @return    pointer to a peripheral if successful
 * @return    NULL if not successful
 */
peripheral_t* periph_mgr_get_peripheral(peripheral_type_t type, int instance);

/**
 * @brief Deallocate a peripheral device
 *
 * @param[in] peripheral   pointer to a previously allocated peripheral
 */
void periph_mgr_free_peripheral(peripheral_t* peripheral);

#endif /* PERIPHERAL_MANAGER_H */
/** @} */
