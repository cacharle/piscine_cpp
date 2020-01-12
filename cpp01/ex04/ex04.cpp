#include <iostream>
#include <string>

int main()
{
	std::string s = "HI THIS IS BRAIN";
	std::string &ref_s = s;
	std::string *ptr_s = &s;

	std::cout << *ptr_s << std::endl;
	std::cout << ref_s << std::endl;
	return 0;
}
