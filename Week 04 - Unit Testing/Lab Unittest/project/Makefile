CXX = g++
CXXFLAGS = -std=c++17 -Wall

TARGET = age
OBJS = main.o testAge.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

main.o: main.cpp functions.h
	$(CXX) $(CXXFLAGS) -c main.cpp

testAge.o: testAge.cpp functions.h
	$(CXX) $(CXXFLAGS) -c testAge.cpp

clean:
	rm -f $(TARGET) $(OBJS)