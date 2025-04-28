#include <iostream>

int main()
{
	std::cout << " char, 1 byte, -128 ... 127;" << std::endl; 
	std::cout << " short, 2 bytes, -32768 ... 32767;" << std::endl; 
	std::cout << " int, 4 bytes, -2^31 ... 2^31-1;" << std::endl; 
	std::cout << " long long, 8 bytes, -2^63 ... 2^63-1;"<< std::endl; 
	std::cout << " ursigned int, 4 bytes, 0 ... 2^32-1;"<< std::endl; 
	std::cout << " float 4 bytes, 6-7 a significant symbol;"<< std::endl; 
	std::cout << " double 8 bytes, 15-16 a significant symbol;"<< std::endl; 
	std::cout << " boll 1 bytes, true/false"<< std::endl;
	return 0;
}