#include <iostream>
#include <string>
#include "Shape.h"

void main() {
	Shape s1(40), s2(20), s3(90);
	int total;
	double totaldbl;

	std::string s("Hallo");

	s1 = s1 + s2;
	std::cout << s1 << std::endl;

	std::cin >> s1;
	std::cout << s1 << std::endl;

	std::cout << s1++ << std::endl;
	std::cout << s1 << std::endl;

	

}