#!/bin/bash
gcc -shared -o giga_test.so -fPIC giga_test.c
export LD_PRELOAD=./giga_test.so:$LD_LIBRARY_PATH
