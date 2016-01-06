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
 * @brief       Common definitions for MSP430F55xx mcu types.
 * 
 * @author      Jon Pattison <jon@kubos.co>
 */

#ifndef MSP430F55XX_H
#define MSP430F55XX_H

#include <cpu.h>


#define int_mgr_disable_interrupts() \
({ \
	unsigned int __x; \
	__asm__ __volatile__("mov SR, %0" : "=r" ((unsigned int) __x) : ); \
	__asm__ __volatile__ ("dint"); \
	__x; \
})

#define int_mgr_restore_interrupts(state) \
({ \
	__asm__ __volatile__ ("mov %0, SR" : : "ri"((unsigned int) state) \
})

#define int_mgr_enable_interrupts(void) \
({ \
	__asm__ __volatile__ ("eint"); \
})


#endif /* MSP430F55XX_H */
/** @} */




