CC := clang++
FLAGS := -c -std=c++11 -Wall -Werror -I. -I../../include/

all: sort

sort: main.o test_sort.o
	$(CC) test_sort.o main.o -o sort

main.o: main.cpp
	$(CC) $(FLAGS) main.cpp

test_sort.o: test_sort.cpp
	$(CC) $(FLAGS) test_sort.cpp

.PHONY: clean

clean:
	rm *.o sort