CXX = g++
CXXFLAGS = -c -g -Wall -std=c++17

PROGRAM = numberSystem.exe

SRC_FILES = src/main.cpp src/num_system.cpp
TEST_FILES = tests/test_num_system.cpp src/num_system.cpp

all: build doctest clean
	@echo "All done..."

build:
	$(CXX) $(CXXFLAGS) $(SRC_FILES)
	$(CXX) -o $(PROGRAM) *.o

doctest:
	$(CXX) -std=c++17 $(TEST_FILES) -o doctest_runner.exe
	./doctest_runner.exe

clean:
	find . -name "*.o" -delete
	find . -name "*.dSYM" -type d -exec rm -rf {} + 2>/dev/null || true
	find . -name "*.exe" -delete
	find . -name "*.out" -delete
	find . -name "*.pch" -delete