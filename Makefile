CC=clang 
CC=gcc #clang or gcc
SRC=obf.c
FLAGS= -w

all: $(SRC)
	$(CC) $(FLAGS) $^ -o $(basename $^)
