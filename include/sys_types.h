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
 * @defgroup     system
 * @ingroup     system
 * @{
 *
 * @brief       Definitions for system data types.
 *
 * @author      Jon Pattison <jon@kubos.co>
 */

#ifndef SYS_TYPES_H
#define SYS_TYPES_H


#include <stdint.h>

#ifndef int_t
typedef int int_t;
typedef unsigned int uint_t;
#endif

typedef enum {
    RC_OK,
    RC_ERROR
} return_code_t;

#define MSB_INDEX(x) ({ \
    int r = 0; \
    while(x >>= 1) { \
        r++; \
    } \
    r; \
})

#endif /* SYS_TYPES_H */
/** @} */




