CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17 -I.
SRC_LIB = calculator.cpp
OBJ_LIB = $(SRC_LIB:.cpp=.o)
LIB = libcalc.a
TARGET = calc_app
SRCS_APP = main.cpp

.PHONY: all clean

all: $(LIB) $(TARGET)

$(LIB): $(OBJ_LIB)
	ar rcs $(LIB) $(OBJ_LIB)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(TARGET): $(SRCS_APP) $(LIB)
	$(CXX) $(CXXFLAGS) $(SRCS_APP) -L. -lcalc -o $(TARGET)

clean:
	rm -f $(OBJ_LIB) $(LIB) $(TARGET)
