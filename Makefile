all:
	g++ starter.cpp ./Timer/timer.cc -std=c++17 && ./a.out
	make clean

test:
	g++ tests.cpp ./Timer/timer.cc -std=c++17 -lgtest && ./a.out
	make clean

clean:
	rm a.out
