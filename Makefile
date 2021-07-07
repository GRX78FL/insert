CC=gcc
SRC=src/*.c
FLAGS=-Wall -Wextra -Werror
bin=-o insert

all:
	$(CC) $(SRC) $(FLAGS) $(bin)

clean:
	rm insert
