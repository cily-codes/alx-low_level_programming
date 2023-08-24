#!/bin/bash
gcc -shared -o /alx-low_level_programming/0x18-dynamic_libraries/giga_test.so -fPIC giga_test.c
export LD_PRELOAD=/alx-low_level_programming/0x18-dynamic_libraries/giga_test.so:$LD_LIBRARY_PATH
