TARGET = ex06
LDFLAGS =
CXXFLAGS = -O2 -std=c++17 -Wall -stdlib=libc++
INCLUDE = -I$(SRC_DIR)
SRC_DIR = ./src
OBJ_DIR = ./obj
CXX = g++

SRCS = $(notdir $(wildcard $(SRC_DIR)/*.cpp))
OBJS = $(SRCS:.cpp=.o)
OBJECTS = $(patsubst %.o,$(OBJ_DIR)/%.o,$(OBJS))
DEPS = $(OBJECTS:.o=.d)

all: $(TARGET)

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDE) -c $< -o $@ -MD $(LDFLAGS)

$(TARGET) : $(OBJECTS)
	$(CXX) $(CXXFLAGS) $^ -o $@ $(LDFLAGS)

.PHONY:all clean

clean:
	rm -f $(TARGET) $(OBJECTS) $(DEPS)

-include $(OBJS:.o=.d)

