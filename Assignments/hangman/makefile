CXX      = g++
CXXFLAGS = -g -Wall -std=c++17

PROGRAM  = hangman-ascii
CPPFILES = main.cpp

all: $(PROGRAM)

$(PROGRAM): $(CPPFILES)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -f $(PROGRAM)