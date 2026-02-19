
CXX = g++

CXXFLAGS = -c -g -Wall -std=c++17

PROGRAM = rectangle.exe

CPPFILES = main.cpp

all:
	$(CXX) $(CXXFLAGS) $(CPPFILES)
	$(CXX) -o $(PROGRAM) *.o

clean:
	rm -f $(PROGRAM) *.o