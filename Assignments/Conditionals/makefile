CXX      = g++
CXXFLAGS = -g -Wall -std=c++17

PROGRAM  = MaxandMin
CPPFILES = menu.cpp

all: $(PROGRAM)

$(PROGRAM): $(CPPFILES)
	$(CXX) $(CXXFLAGS) -o $@ $^

run: $(PROGRAM)
	./$(PROGRAM)
	
clean:
	rm -f $(PROGRAM)