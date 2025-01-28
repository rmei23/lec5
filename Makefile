# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++11 -Wall

# Target executable
TARGET = main

# Source files
SRCS = functions_to_implement.cpp test.cpp

# Object files
OBJS = $(SRCS:.cpp=.o)

# Default target
all: $(TARGET)

# Rule to build the target
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Pattern rule to compile .cpp to .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean target to remove build artifacts
clean:
	rm -f $(OBJS) $(TARGET)
