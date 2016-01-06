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
 * @brief       OS internal definitions for thread management subsystem.
 *
 * @author      Jon Pattison <jon@kubos.co>
 */
#ifndef THREAD_OS_INTERNAL_H
#define THREAD_OS_INTERNAL_H

#include <mutex.h>

/**
 * @brief put a thread into a 'waiting for mutex' state. Abandon the wait after
 *        waitus microseconds.
 *
 * @param mutex  mutex to wait for.
 * @param waitus max number of microseconds to wait for the mutex.
 *
 * @return  RC_OK if the mutex is locked by this thread. RC_ERROR if it times
 * out while waiting.
 *
 */
return_code_t thrd_mgr_add_mutex_wait(mutex_t* mutex, uint32_t waitus);

/**
 * @brief put a thread into a 'waiting for mutexes' state. Abandon the wait
 *        after waitus microseconds.
 *
 * @param count  number of mutexes to wait for.
 * @param mutex  array of pointers to mutexes to wait for.
 * @param waitus max number of microseconds to wait for the mutexes.
 *
 * @return  RC_OK if the mutex is locked by this thread. RC_ERROR if it times
 * out while waiting.
 *
 */
return_code_t thrd_mgr_add_mutex_wait(uint_t count, mutex_t* mutex[],
                                      uint32_t waitus);

#endif /* THREAD_OS_INTERNAL_H */
/** @} */
