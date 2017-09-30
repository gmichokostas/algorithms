CC := clang++
FLAGS := -c -std=c++11 -Wall -Werror -I.

all: list

list: main.o
	$(CC) main.o -o list

main.o: main.cpp
	$(CC) $(FLAGS) main.cpp

.PHONY: clean

clean:
	rm *.o list