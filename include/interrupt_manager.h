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
 * @brief       Definitions for generic interrupt management subsystem interface.
 * 
 * @author      Jon Pattison <jon@kubos.co>
 */
#ifndef INTERRUPT_MANAGER_H
#define INTERRUPT_MANAGER_H

#include <cpu.h>

/* int_mgr_ */

/*
 * These functions are defined in mcu.h
 *
 * inline reg_var_t int_mgr_disable_interrupts(void) { }
 * inline void int_mgr_restore_interrupts(reg_var_t state) { }
 * inline reg_var_t int_mgr_enable_interrupts(void) { }
 */
 
 
#endif /* INTERRUPT_MANAGER_H */
/** @} */
