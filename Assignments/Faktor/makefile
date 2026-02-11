CXX      = g++
CXXFLAGS = -g -Wall -std=c++17

PROGRAM  = faktor-kattis
CPPFILES = faktor.cpp

all: $(PROGRAM)

$(PROGRAM): $(CPPFILES)
	$(CXX) $(CXXFLAGS) -o $@ $^

run: $(PROGRAM)
	./$(PROGRAM)
	
clean:
	rm -f $(PROGRAM)