CC=gcc
SRC=src/*.c
FLAGS=-Wall -Wextra -Werror -g
bin=-o insert

all:
	$(CC) $(SRC) $(FLAGS) $(bin)

clean:
	rm insert
