#!/bin/bash
wget -P /tmp https://github.com/Tevin97/alx-low_level_programming/blob/a52a795399c89df4ebbb62302bf12fc644c48464/0x18-dynamic_libraries/lib-101-test.so
export LD_PRELOAD=/tmp/lib-101-test.so
