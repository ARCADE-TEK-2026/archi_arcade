#!/bin/bash

rm -rf __tmp

git clone https://github.com/ARCADE-TEK-2026/archi_arcade.git __tmp

cp -r __tmp/include .

rm -rf __tmp
