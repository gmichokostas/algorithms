CC := clang++
FLAGS := -c -std=c++11 -Wall -Werror -I. -I../../include/

all: list

list: main.o test_list.o
	$(CC) test_list.o main.o -o list

main.o: main.cpp
	$(CC) $(FLAGS) main.cpp

test_list.o: test_list.cpp
	$(CC) $(FLAGS) test_list.cpp

.PHONY: clean

clean:
	rm *.o list