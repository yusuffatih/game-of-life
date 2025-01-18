#!/bin/bash

set -xe

CC=clang
CFLAGS="-Wall -Wextra -std=c11 -I/Users/yusuff/raylib-master/src"
LDFLAGS="-L/Users/yusuff/raylib-master/src -lraylib -framework CoreVideo -framework IOKit -framework Cocoa -framework GLUT -framework OpenGL"

SOURCE_FILE="main.c game.c"
OUTPUT_FILE="game"

$CC $CFLAGS $SOURCE_FILE -o $OUTPUT_FILE $LDFLAGS

