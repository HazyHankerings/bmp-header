#!/bin/bash

if gcc bmp.c -o bmp; then
	./bmp > test.bmp
else
	echo "comp failed"
	exit 1
fi
