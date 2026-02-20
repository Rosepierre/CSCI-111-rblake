CXX      = g++
CXXFLAGS = -g -Wall -std=c++17

PROGRAM  = library
CPPFILES = $(wildcard *.cpp) ../tests/test_my_math.cpp

all: $(PROGRAM)

$(PROGRAM): $(CPPFILES)
	$(CXX) $(CXXFLAGS) -o $@ $^

run: $(PROGRAM)
	./$(PROGRAM)

clean:
	rm -f $(PROGRAM)