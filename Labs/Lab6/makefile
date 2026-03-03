CXX      = g++
CXXFLAGS = -g -Wall -std=c++17

PROGRAM  = Shapes
CPPFILES = main.cpp shapes.cpp

all: $(PROGRAM)

$(PROGRAM): $(CPPFILES)
	$(CXX) $(CXXFLAGS) -o $@ $^

run: $(PROGRAM)
	./$(PROGRAM)

clean:
	rm -f $(PROGRAM)