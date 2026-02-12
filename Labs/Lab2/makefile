CXX      = g++
CXXFLAGS = -g -Wall -std=c++17

PROGRAM  = circle-execute
CPPFILES = Circle.cpp

all: $(PROGRAM)

$(PROGRAM): $(CPPFILES)
	$(CXX) $(CXXFLAGS) -o $@ $^

run: $(PROGRAM)
	./$(PROGRAM)
	
clean:
	rm -f $(PROGRAM)