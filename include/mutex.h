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
 * @defgroup    Threading
 * @ingroup     Threading
 * @{
 *
 * @brief       Definitions for a mutex syncronization object.
 *
 * @author      Jon Pattison <jon@kubos.co>
 */
#ifndef MUTEX_H
#define MUTEX_H

#include <std_types.h>

#define MUTEX_UNLOCKED (0x00u)
#define MUTEX_LOCKED   (0xFFu)

/**
 * @brief Mutex type.
 */
typedef volatile reg_var_t mutex_t __attribute__ (aligned
        (__BIGGEST_ALIGNMENT__));

/**
 * @brief Locks a mutex. Will block for waitus microseconds.
 *
 * @param[in] mutex  mutex object to lock.
 * @param[in] waitus number of microseconds to wait for the mutex.
 *
 * @return  RC_OK if successful, RC_ERROR if call timed out.
 */
return_code_t mutex_lock(mutex_t *mutex, uint32_t waitus);

/**
 * @brief Locks multiple mutexes. Will block for waitus microseconds.
 *
 * @param[in] count count of mutex objects to lock.
 * @param[in] mutex pointers to mutex objects to lock.
 * @param[in] waitus number of microseconds to wait for the mutex.
 *
 * @return  RC_OK if successful, RC_ERROR if call timed out. */
return_code_t mutex_lock(uint_t count, mutex_t* mutex[], uint32_t waitus);

/**
 * @brief Unlocks the mutex.
 *
 * NOTE: Unlocking a mutex may free a higher priority thread so this function
 *       may not return for a significant amount of time.
 *
 * @param[in] mutex Mutex object to unlock, must not be NULL.
 */
void mutex_unlock(mutex_t *mutex);

/**
 * @brief Unlocks a group of mutexes.
 *
 * This function is "atomic" in that all of the mutexes will be unlocked before
 * any higher priority thread is allowed to run.
 *
 * NOTE: Unlocking a mutex may free a higher priority thread so this function
 *       may not return for a significant amount of time.
 *
 * @param[in] count count of mutex objects to lock.
 * @param[in] mutex pointers to mutex objects to lock.
 */
void mutex_unlock(uint_t count, mutex_t* mutex[]);

#endif /* MUTEX_H_ */
/** @} */
