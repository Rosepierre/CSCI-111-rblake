CXX      = g++
CXXFLAGS = -g -Wall -std=c++17

PROGRAM  = calc-short-for-calcutor-just-using-slang
CPPFILES = calc.cpp

all: $(PROGRAM)

$(PROGRAM): $(CPPFILES)
	$(CXX) $(CXXFLAGS) -o $@ $^

run: $(PROGRAM)
	./$(PROGRAM)
	
clean:
	rm -f $(PROGRAM)