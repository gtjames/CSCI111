# compiler name
CXX = g++
# c++ compiler flags
# -g : adds debugging information to the executable file
# -Wall : turns on most, but not  all, compiler warnings
# -std=C++17 : uses c++17 standard
# put all the required flags separated by space
CXXFLAGS = -c -g -Wall -std=c++17

# the build target executable file; .exe is not required
PROGRAM = doggopher.exe

# list .cpp files separated by space
SOURCEFILES = $(wildcard src/*.cpp)
TESTFILES = $(wildcard tests/*.cpp)


# make build rule/default rule that'll be run when we run "make"
# first compile each file to object file
# then make a single binary program

all: build doctest clean

build:
	$(CXX) $(CXXFLAGS) $(SOURCEFILES)
	$(CXX) -o $(PROGRAM) *.o

run: build
	./$(PROGRAM)

doctest:
	$(CXX) $(TESTFILES) src/doggopher.cpp -o test_doggopher.exe
	./test_doggopher.exe
	@echo "All tests executed successfully!"
	
# make clean rule
# delete object and binary files

clean:
	find . -name "*.o" -delete
	find . -name "*.dSYM" -type d -exec rm -rf {} + 2>/dev/null || true
	find . -name "*.exe" -delete
	find . -name "*.out" -delete
	find . -name "*.pch" -delete
	
	