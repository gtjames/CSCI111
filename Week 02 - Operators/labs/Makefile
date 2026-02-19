# CXX = g++
# CXXFLAGS = -std=c++17 -Wall
# Compiler
CXX = clang++

# Compiler flags
CXXFLAGS = -std=c++17 -Wall -Wextra -Wpedantic

TARGETS = lab1 lab2 circle calc
# SRC = main.cpp

# Default rule
all: $(TARGETS)

# Pattern rule: build each target from its .cpp
%: %.cpp
	$(CXX) $(CXXFLAGS) $< -o $@
# 	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

# Run a specific program: make run TARGET=primes
run: $(TARGET)
	./$(TARGET)

# Clean up
clean:
	rm -f $(TARGETS)	
