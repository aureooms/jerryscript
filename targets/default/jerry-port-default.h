/* Copyright 2016 Samsung Electronics Co., Ltd.
 * Copyright 2016 University of Szeged
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef JERRY_PORT_DEFAULT_H
#define JERRY_PORT_DEFAULT_H

#include <stdbool.h>

#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */

/** \addtogroup jerry_port_default Default Jerry engine port API
 * These functions are only available if the default port of Jerry is used.
 * @{
 */

void jerry_port_default_set_abort_on_fail (bool);
bool jerry_port_default_is_abort_on_fail (void);

/**
 * @}
 */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* !JERRY_PORT_DEFAULT_H */
