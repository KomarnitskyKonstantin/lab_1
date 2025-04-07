#include <iostream>

int main()
{

	short a = 5;
	short b = 7;
	short c = a+b;
	std::cout<<c<<std::endl; 


	std::cout << "char, 1 byte, -128 ... 127;" 
	<< " short, 2 bytes, -32768 ... 32767;" << 
	" int, 4 bytes, -2^31 ... 2^31-1;" << 
	" long long, 8 bytes, -2^63 ... 2^63-1;"<<
	" ursigned int, 4 bytes, 0 ... 2^32-1;"<<
	" float 4 bytes, 6-7 a significant symbol;"<<
	" double 8 bytes, 15-16 a significant symbol;"<<
	" boll 1 bytes, true/false"<<
	 std::endl;
	return 0;
}