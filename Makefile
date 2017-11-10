CC=gcc #clang or gcc
SRC=obf.c
FLAGS= -lm -w
MEMSIZE = "2<<20"
all: $(SRC)
	$(CC) $(FLAGS) -DSZ=$(MEMSIZE) $^ -o $(basename $^)
