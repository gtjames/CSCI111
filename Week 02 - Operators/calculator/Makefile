CXX = g++
CXXFLAGS = -std=c++20 -Wall -Wextra -g

SOURCES = calc.cpp binary.cpp
TARGETS = calc binary

.PHONY: all clean test

all: $(TARGETS)

# Pattern rule: app1 <- app1.cpp, etc.
%: %.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

test: all
	@echo "Running tests..."
	@./calc < test.in > out
	@diff -q out test.out && echo "All tests passed!" || echo "Tests failed!"	

	@./calc < test2.in > out
	@diff -q out test2.out && echo "All tests passed!" || echo "Tests failed!"	

	@./calc < test2.in > out
	@diff -q out testBad.out && echo "All tests passed!" || echo "Tests failed!"	

run: all
	./calc

clean:
	rm -f $(TARGETS)