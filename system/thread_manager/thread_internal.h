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
 * @brief       internal definitions for thread management subsystem.
 *
 * @author      Jon Pattison <jon@kubos.co>
 */
#ifndef THREAD_INTERNAL_H
#define THREAD_INTERNAL_H

#define THREAD_STATE_NEW	0
#define THREAD_STATE_RUNNING
#define THREAD_STATE_WAITING
#define THREAD_STATE_SLEEPING





typedef thread_cntrl_blk {
	int_t* priority_map_entry;

}





#endif /* THREAD_INTERNAL_H */
/** @} */
