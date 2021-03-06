/* Copyright 2016 Samsung Electronics Co., Ltd.
 * Copyright 2016 University of Szeged.
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

#ifndef JERRY_LIBC_ASSERT_H
#define JERRY_LIBC_ASSERT_H

#include <stdio.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */

#ifndef NDEBUG
#define assert(x) \
  do \
  { \
    if (__builtin_expect (!(x), 0)) \
    { \
      fprintf (stderr, "%s:%d: %s: Assertion `%s' failed.", __FILE__, __LINE__, __func__, #x); \
      abort (); \
    } \
  } while (0)
#else /* NDEBUG */
#define assert(x) ((void) 0)
#endif /* !NDEBUG */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* !JERRY_LIBC_ASSERT_H */
