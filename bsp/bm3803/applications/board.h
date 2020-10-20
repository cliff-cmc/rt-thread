/*
Copyright 2020 Shenzhen Academy of Aerospace Technology

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.

Change Logs:
Date           Author       Notes
2020-10-16     Dystopia     the first version
*/

#ifndef __BOARD_H__
#define __BOARD_H__

#include <bm3803.h>

#define CPU_FREQ 90000000

void rt_hw_board_init(void);

#endif
