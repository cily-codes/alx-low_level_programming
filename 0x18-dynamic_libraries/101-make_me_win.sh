#!/bin/bash
gcc -shared -o myprint.so -fPIC giga_test.c
export LD_PRELOAD=./myprint.so:$LD_LIBRARY_PATH
