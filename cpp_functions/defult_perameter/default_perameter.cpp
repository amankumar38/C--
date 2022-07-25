#include <iostream>

std::string myname;

void mynamefun()
{
	std::cout << "what's your name" << std::endl;
	std::cin >> myname;
}

int main()
{
	mynamefun();
	std::cout << " Hello " << myname << " nice to meet you." << std::endl;
	return 0;
}