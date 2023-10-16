#!/bin/bash

wget -p /tmp https://github.com/sidneyriffic/
holbertonschool-low-level-programming/raw/
master/0x18-dynamic_libraries/putshack.so
expot LD_PRELOAD=/tmp/putshack.so
