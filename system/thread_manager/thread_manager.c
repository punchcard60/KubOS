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
 * @brief       Implementation of the thread management subsystem.
 *
 * @author      Jon Pattison <jon@kubos.co>
 */
#include "thread_internal.h"

thread_id_t thrd_mgr_create_thread(function_pointer_t thread_function,
									void* thread_args, uint8_t* stack,
									uint32_t stack_size, uint_t priority) {
	return 0; /* $$$ Not Implemented */
}

uint_t thrd_mgr_get_priority(thread_id_t thread) {
		return 0; /* $$$ Not Implemented */
}

return_code_t thrd_mgr_set_priority(thread_id_t thread, uint_t priority) {
		return RC_ERROR; /* $$$ Not Implemented */
}

return_code_t thrd_mgr_destroy_thread(thread_id_t thread) {
		return RC_ERROR; /* $$$ Not Implemented */
}

void thrd_mgr_exit_thread() __attribute__ ((noreturn)) {

}

return_code_t thrd_mgr_add_mutex_wait(mutex_t* mutex, uint32_t waitus) {
		return RC_ERROR; /* $$$ Not Implemented */
}

return_code_t thrd_mgr_add_mutex_wait(uint_t count, mutex_t* mutex[],
                                      uint32_t waitus) {
	return RC_ERROR; /* $$$ Not Implemented */
}







