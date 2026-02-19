CXX = g++
CXXFLAGS = -c -g -Wall -std=c++17

PROGRAM = menu

# list .cpp files separated by space
SRC = $(wildcard src/*.cpp)
TEST_FILES = $(wildcard tests/*.cpp)

all: build doctest run clean

build:
	$(CXX) $(CXXFLAGS) $(SRC)
	$(CXX) -o $(PROGRAM) *.o

run: build
	./$(PROGRAM)
	
# make clean rule
# delete object and binary files
clean:
	find . -name "*.o" -delete
	find . -name "*.dSYM" -type d -exec rm -rf {} + 2>/dev/null || true
	find . -name "*." -delete
	find . -name "*.out" -delete
	find . -name "*.pch" -delete

assert: build
	./$(PROGRAM) test

time: 
	clear
	date

doctest:
	$(CXX) -std=c++17 -I tests $(TEST_FILES) src/utils.cpp -o doctest_runner
	./doctest_runner
	