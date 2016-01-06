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
 * @brief       Definitions for thread management subsystem interface.
 *
 * @author      Jon Pattison <jon@kubos.co>
 */
#ifndef THREAD_MANAGER_H
#define THREAD_MANAGER_H

#include <sys_types.h>

#define MAX_THREADS 32u
typedef uint_t thread_id_t;
#define IS_VALID_THREAD_ID(threadid) ((threadid) < MAX_THREADS)

typedef void (*function_pointer_t)(void *arg);
#define THREAD_MAX_PRIORITY (MAX_THREADS - 1)
#define THREAD_FORCE_PRIORITY (1u << MSB_INDEX(MAX_THREADS))

/**
 * @brief creates a new thread
 *
 * @param thread_function pointer to the function that the new thread will
 *                        execute.
 * @param thread_args	  pointer to arguments passed to the thread_function.
 * @param stack			  pointer to the new thread's stack memory
 * @param stack_size      indicates the length in uint8_t of the stack memory.
 * @param priority        sets the priority of the new thread. Vaild priorities
 *                        range from 0 (lowest priority) to
 *                        THREAD_MAX_PRIORITY. Only one thread is allowed to
 *                        have a given priority.
 *                        Using (thread_priority | THREAD_FORCE_PRIORITY) will
 *                        force the new thread to be "inserted" into the
 *                        priority list at thread_priority position. Some
 *                        existing threads at and below thread_priority may have
 *                        their priority reduced by one.
 *
 * @return  if successful, returns a thread id. if not successful, returns an
 *          invalid thread id which can be tested with the IS_VALID_THREAD_ID
 *          (threadid) macro. Error returns are: EMAXTHREADS - thread space has
 *          been exhausted. EPRIORCOLLISION - an existing thread already has
 *          the requested priority, or there isn't enough space to insert the
 *          priority.
 *
 */
thread_id_t thrd_mgr_create_thread(function_pointer_t thread_function,
									void* thread_args, uint8_t* stack,
									uint32_t stack_size, uint_t priority);

/**
 * @brief get the priority of an existing thread.
 *
 * @param thread_id identifier of an existing thread.
 *
 * @return  current priority of the thread.
 *
 */
uint_t thrd_mgr_get_priority(thread_id_t thread);

/**
 * @brief set the priority of an existing thread.
 *
 * @param thread_id identifier of an existing thread.
 * @param priority new identity of an existing thread.
 *
 * @return  pass/fail return code.
 *
 */
return_code_t thrd_mgr_set_priority(thread_id_t thread, uint_t priority);

/**
 * @brief destroy an existing thread.
 *
 * @param thread_id identifier of an existing thread.
 *
 * @return  pass/fail return code.
 *
 */
return_code_t thrd_mgr_destroy_thread(thread_id_t thread);

/**
 * @brief exit from and destroy the current thread.
 *
 * @return  does not return.
 *
 */
void thrd_mgr_exit_thread() __attribute__ ((noreturn));

#endif /* THREAD_MANAGER_H */
/** @} */
