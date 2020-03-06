#!/bin/bash
# Author: tangqing
# Created Time: Fri 06 Mar 2020 03:28:25 PM CST

if [ -d build ]
then
    cd build
else
    mkdir build
    cd build
fi

cmake ..
make
