CXX = g++
CXXFLAGS = -std=c++20 -Wall -Wextra -g

SOURCES = binary.cpp calc0.cpp calc1.cpp calc2.cpp calc3.cpp calc4.cpp calc5.cpp
TARGETS = binary calc0 calc1 calc2 calc3 calc4 calc5

.PHONY: all clean test

all: $(TARGETS)

# Pattern rule: app1 <- app1.cpp, etc.
%: %.cpp
	-$(CXX) $(CXXFLAGS) $< -o $@

calc5: calc5.cpp calculator.h
	-$(CXX) $(CXXFLAGS) $< -o $@

test: all
	@echo "Running tests..."
	@./calc5 < tests/test1.in > tests/out
	@diff -q tests/out tests/test1.out && echo "\033[32mtest1 passed!\033[0m" || echo "\033[31mTest1 failed!"	

	@./calc5 < tests/test2.in > tests/out
	@diff -q tests/out tests/test2.out && echo "\033[32mtest2 passed!\033[0m" || echo "\033[31mTest2 failed!\033[0m"	

	@./calc5 < tests/test2.in > tests/out
	@diff -q tests/out tests/testBad.out && echo "\033[32mtestBad passed!\033[0m" || echo "\033[31mTestBad failed!\033[0m"	

	@./calc5 < tests/test3.in > tests/out
	@diff -q tests/out tests/test3.out && echo "\033[32mtest3 passed!\033[0m" || echo "\033[31mTest3 failed!\033[0m"	

	@./calc5 < tests/test5.in > tests/out
	@diff -q tests/out tests/test5.out && echo "\033[32mtest5 passed!\033[0m" || echo "\033[31mTest5 failed!\033[0m"	

run: all
	./calc5

clean:
	rm -f $(TARGETS)


rmDebug:
	rm -rf $(addsuffix .dSYM,$(TARGETS))