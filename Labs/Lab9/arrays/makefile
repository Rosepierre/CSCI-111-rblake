CXX      = g++
CXXFLAGS = -g -Wall -std=c++17

PROGRAM  = arrays
CPPFILES = src/main.cpp src/utils.cpp

all: $(PROGRAM)

$(PROGRAM): $(CPPFILES)
	$(CXX) $(CXXFLAGS) -o $@ $^

run: $(PROGRAM)
	./$(PROGRAM)

clean:
	rm -f $(PROGRAM)