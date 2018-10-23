#include <boost/multiprecision/cpp_int.hpp>
#include "my_class.hpp"

int main() {
	boost::multiprecision::cpp_int c("111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111");
	std::cout << c << std::endl;
	MyClass my_instance(42);
	my_instance.my_function();
}
