# compiler name
CXX = g++
# c++ compiler flags
# -g : adds debugging information to the executable file
# -Wall : turns on most, but not  all, compiler warnings
# -std=C++17 : uses c++17 standard
# put all the required flags separated by space
CXXFLAGS = -g -Wall -std=c++17 -Wall

# list .cpp files separated by space
SRC = $(wildcard *.cpp)
PROGRAMS = $(SRC:.cpp=)

all: $(PROGRAMS)

# make build rule/default rule that'll be run when we run "make"
# first compile each file to object file
# then make a single binary program
apod: apod.o
	$(CXX) $^ -o $@ -lcurl

apod2: apod2.o
	$(CXX) $^ -o $@ -lcurl

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

run:
	./$(PROGRAM)

test:
	./$(PROGRAM) test
	
# make clean rule
# delete object and binary files
clean:
	rm -f *.o *.jpg apod apod2 

