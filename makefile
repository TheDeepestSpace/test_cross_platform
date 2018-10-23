all: setup out/main cleanup

setup:
	mkdir -p obj
	mkdir -p out

obj/main.o: test_cross_platform/main.cpp
	g++ -c test_cross_platform/main.cpp -o obj/main.o

out/main: obj/main.o test_cross_platform/my_class.hpp
	g++ obj/main.o -o out/test_cross_platform

cleanup:
	rm -rf obj
