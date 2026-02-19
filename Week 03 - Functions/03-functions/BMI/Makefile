# Compiler
CXX = clang++

# Compiler flags
CXXFLAGS = -std=c++17 -Wall -Wextra -Wpedantic

# Executables (one per main file)
TARGETS = primes name

# Default rule
all: $(TARGETS)

# Pattern rule: build each target from its .cpp
%: %.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

# Run a specific program: make run TARGET=primes
run:
	./$(TARGET)

# Clean up
clean:
	rm -f $(TARGETS)