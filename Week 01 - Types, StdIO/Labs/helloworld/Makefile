# compiler name
CXX = g++

# c++ compiler flags
# -c : just do preprocess; compile and assemble into object files
# -g : adds debugging information to the executable file
# -Wall : turns on most, but not  all, compiler warnings
# -std=c++17 : uses c++17 standard
# put all the required flags separated by space
CXXFLAGS = -c -g -Wall -std=c++17

# the build target executable file; .exe is not required
PROGRAM = hangman.exe

# list all .cpp files separated by space
CPPFILES = main.cpp

# make all rule/default rule that'll be run when we run "make"
# first compile each file to object file
# then make a single binary program
all:
	$(CXX) $(CXXFLAGS) $(CPPFILES)
	$(CXX) -o $(PROGRAM) *.o

# make clean rule
# delete object and binary files
clean:
	rm -f $(PROGRAM) *.o

debug: all
	gdb ./$(PROGRAM)

format:
	clang-format -i *.cpp *.h

rebuild: clean all

print-vars:
	@echo CXX=$(CXX)
	@echo CXXFLAGS=$(CXXFLAGS)
	@echo CPPFILES=$(CPPFILES)

help:
	@echo "make        - build the program"
	@echo "make run    - build and run"
	@echo "make clean  - remove executable"

.PHONY: test

test: all
	@echo "Test 1:"
	./$(PROGRAM) < tests/input1.txt | diff -y - tests/output1.txt
	@echo "Test 2:"
	./$(PROGRAM) < tests/input2.txt | diff -y - tests/output2.txt

.PHONY: test test-basic test-edge

test: test-basic test-edge

test-basic: all
	./$(PROGRAM) < tests/basic.txt | diff - tests/basic.out

test-edge: all
	./$(PROGRAM) < tests/edge.txt | diff -y - tests/edge.out

.PHONY: clean-tests

clean-tests:
	rm -f tests/*.tmp

diff -u expected.txt actual.txt