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
 * @ingroup     mcu
 * @{
 *
 * @brief       Definitions for MSP430XV2 cpu specific types.
 *
 * @author      Jon Pattison <jon@kubos.co>
 */

#ifndef CPU_H
#define CPU_H

#include <sys_types.h>

/* Define the natural register size */
typedef uint16_t reg_var_t;


/* Atomic exchange of values */
reg_var_t __attribute__ ((critical)) atomic_exchange(reg_var_t* target,
                                                     reg_var_t value);

#endif /* CPU_H */
/** @} */




