include_dirs := ./
basics:test_basic.cpp
	g++ test_basic.cpp -o test_basic -I$(include_dirs)
exe:main.cpp
	gcc `pkg-config --cflags --libs gtk+-2.0` main.cpp -o exe
