#!/bin/bash
set -e
set -x

./чиста
clang -e _початок -nostdlib -o test test.o
./test