CXX = g++
CXXFLAGS = -std=c++17 -Wall -Iinclude
TARGET = movie_app

SRCS = src/main.cpp src/Movie.cpp src/User.cpp src/Rating.cpp src/MovieManager.cpp \
       src/UserManager.cpp

$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)