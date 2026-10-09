CFLAGS := $(CFLAGS) -std=c90 -g -L../ -I../ -lvsv -Wpedantic -g -fsanitize=address,undefined
CXXFLAGS := $(CXXFLAGS) -g -L../ -I../ -lvsv -Wpedantic -g -fsanitize=address,undefined
build:
	$(CC) $(CFLAGS) ex1.c -o ex1
	$(CXX) $(CXXFLAGS) ex1_std.cpp -o ex1_std
