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
 *
 * @} */
#include "../thread_manager/thread_os_internal.h"

return_code_t mutex_lock(mutex_t *mutex, uint32_t waitus) {
	reg_var_t result = atomic_exchange((reg_var_t*)mutex, MUTEX_LOCKED);

	if (result == MUTEX_LOCKED)	{

		if(waitus == 0) {
			return RC_ERROR;
		}
		thrd_mgr_mutex_sleep(mutex, waitus);
	}
	return RC_OK;
}

return_code_t mutex_lock(uint_t count, mutex_t* mutex[], uint32_t waitus) {
	int idx = 0;

	while (atomic_exchange((reg_var_t*)(mutex[idx]), MUTEX_LOCKED) !=
			MUTEX_LOCKED) {
		idx++;
		if (idx >= count) {
			return RC_OK;
		}
	}

	while (idx >= 0) {
		atomic_exchange((reg_var_t*)(mutex[idx]), MUTEX_UNLOCKED);
		idx--;
	}

	if (waitus > 0) {
		return thrd_mgr_mutex_sleep(count, mutex[], waitus);
	}
	return RC_ERROR;
}

void mutex_unlock(mutex_t *mutex) {
	atomic_exchange((reg_var_t*)mutex, MUTEX_UNLOCKED);
}

void mutex_unlock(uint_t count, mutex_t* mutex[]) {

}
