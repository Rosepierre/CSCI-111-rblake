CXX      = g++
CXXFLAGS = -g -Wall -std=c++17

PROGRAM  = Modulo
CPPFILES = src/main.cpp src/modulo.cpp

all: $(PROGRAM)

$(PROGRAM): $(CPPFILES)
	$(CXX) $(CXXFLAGS) -o $@ $^

run: $(PROGRAM)
	./$(PROGRAM)

clean:
	rm -f $(PROGRAM)