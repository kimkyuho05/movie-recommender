CXX = g++
CXXFLAGS = -Wall -std=c++17 -Iinclude
TARGET = movie_app

# 모든 소스 파일 리스트
SRCS = src/Movie.cpp src/User.cpp src/Rating.cpp src/main.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f src/*.o $(TARGET)

run: all
	./$(TARGET)