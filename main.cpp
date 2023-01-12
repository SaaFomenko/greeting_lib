#include <iostream>
#include <string>
#include "greeter.h"


int main()
{
	std::string name = "";

	std::cout << "Введите имя: ";
	std::getline(std::cin, name);

	Greeter hello;

	const std::string msg = hello.greet(name);

	std::cout << msg << std::endl;

	return 0;
}
