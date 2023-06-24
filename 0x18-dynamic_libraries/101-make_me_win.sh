#!/bin/bash
wget -P /tmp/lib-101-make_me_win.so https://github.com/Tevin97/alx-low_level_programming/blob/master/0x18-dynamic_libraries/lib-101-make_me_win.so
export LD_PRELOAD=/tmp/lib-101-make_me_win.so
