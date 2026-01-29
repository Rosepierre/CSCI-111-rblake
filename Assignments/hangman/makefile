CXX      = g++
CXXFLAGS = -g -Wall -std=c++17

PROGRAM  = bob
CPPFILES = main.cpp
OBJFILES = $(CPPFILES:.cpp=.o)

.PHONY: all clean

all: $(PROGRAM)

$(PROGRAM): $(OBJFILES)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f $(OBJFILES) $(PROGRAM)