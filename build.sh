#!/usr/bin/bash
gcc src/main.c -o main $(pkg-config --cflags --libs sdl3)