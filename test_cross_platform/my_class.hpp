#pragma once

#include <iostream>

struct MyClass {
	int _my_attr;

	MyClass(int my_attr) : _my_attr(my_attr) {}

	inline void my_function() { std::cout << __FUNCSIG__ << std::endl; }
};
