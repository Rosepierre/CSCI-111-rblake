CXX      = g++
CXXFLAGS = -g -Wall -std=c++17

PROGRAM  = asciiPROJECT
CPPFILES = ascii.cpp

all: $(PROGRAM)

$(PROGRAM): $(CPPFILES)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -f $(PROGRAM)