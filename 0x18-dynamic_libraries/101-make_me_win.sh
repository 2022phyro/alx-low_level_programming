#!/bin/bash 
wget -P /tmp https://github.com/2022phyro/alx-low_level_programming/raw/main/0x18-dynamic_libraries/winner.so
export LD_PRELOAD=/tmp/winner.so
