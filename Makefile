include_dirs := ./
destroyer:test_destroyer.cpp
	g++ test_destroyer.cpp -I$(include_dirs) -o ./output/test_destroyer
basics:test_basic.cpp
	g++ test_basic.cpp -I$(include_dirs) -o ./output/test_basic
exe:main.cpp
	gcc `pkg-config --cflags --libs gtk+-2.0` main.cpp -o ./output/exe
