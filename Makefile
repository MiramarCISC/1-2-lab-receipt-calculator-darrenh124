CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -pedantic -Iinclude

APP = main
TEST_APP = test_receipt

SRC = src/main.cpp src/receipt.cpp
TEST_SRC = tests/test_receipt.cpp src/receipt.cpp

.PHONY: all clean test run

all: $(APP)

$(APP): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(APP)

$(TEST_APP): $(TEST_SRC)
	$(CXX) $(CXXFLAGS) $(TEST_SRC) -o $(TEST_APP)

run: $(APP)
	./$(APP)

test: $(TEST_APP)
	./$(TEST_APP)

clean:
	rm -f $(APP) $(TEST_APP)
