.PHONY: build test

build:
	gcc -std=c2x -Wall -Wextra main.c libs/* -o server.out

test:
	time ./test/run.sh > test/output.txt 2> test/time.txt