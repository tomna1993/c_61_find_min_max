CC := gcc
#CFLAGS := 
DEST := ./build/

all: find_min_max.c
	mkdir -p build
	$(CC) find_min_max.c -lcs50 -o $(DEST)/find_min_max 