#include <iostream>

#include <boost/spirit/version.hpp>

static_assert(SPIRIT_VERSION >= 0x2059, "Boost::Spirit is too old, please update");

int main() {
	std::cout << "Hello World\n";
	return 0;
}
