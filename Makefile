include_dirs := ./
basics:test_basic.cpp
	g++ test_basic.cpp -I$(include_dirs) -o ./output/test_basic
exe:main.cpp
	gcc `pkg-config --cflags --libs gtk+-2.0` main.cpp -o ./output/exe
