# Hello
CXX		 = g++
CXXFLAGS = -Wall -std=c++11
TARGET	 = main
DEPS = cow.o
SRC		 = main.cpp

$(TARGET): $(SRC) $(DEPS)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET) $(DEPS)

cow.o: cow.h


.PHONY: clean
clean:
	rm -f $(TARGET) $(DEPS)