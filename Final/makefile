CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra -pedantic

TARGET = password_checker
SRC = main.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)