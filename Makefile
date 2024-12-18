CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17
TARGET = matrix_mult

all: $(TARGET)

$(TARGET): main.cpp
	$(CXX) $(CXXFLAGS) -o $(TARGET) main.cpp

clean:
	rm -f $(TARGET)
