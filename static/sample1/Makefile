INCLUDE_DIR:=./include
SRC_DIR:=./src

CXX=g++
CXXFLAGS=-std=c++11 -Wall -I$(INCLUDE_DIR)

program: $(SRC_DIR)/*.cpp
	$(CXX) $(CXXFLAGS) -o program $(SRC_DIR)/*.cpp

.PHONY: clean
clean:
	rm program