CXX      = g++
CXXFLAGS = -g -Wall -std=c++17

PROGRAM  = Distance
CPPFILES = point.cpp

all: $(PROGRAM)

$(PROGRAM): $(CPPFILES)
	$(CXX) $(CXXFLAGS) -o $@ $^

run: $(PROGRAM)
	./$(PROGRAM)
	
clean:
	rm -f $(PROGRAM)