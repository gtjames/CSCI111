COMPILER = g++

COMPILER_FLAGS = -c -g -Wall -std=c++17

PROGRAM_NAME =  func_prototype.exe

CPP_FILES =  func_prototype.cpp

build:
	$(COMPILER) $(COMPILER_FLAGS) $(CPP_FILES)
	$(COMPILER) -o $(PROGRAM_NAME) *.o

run:
	./$(PROGRAM_NAME)

clean:
	rm -f $(PROGRAM_NAME) *.o
