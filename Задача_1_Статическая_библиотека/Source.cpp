#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
#include "GreeterStatic.h"




int main(int argc, char** argv)
{

	//SetConsoleOutputCP(65001);
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string name;
	Greeter func;

	std::cout << "Введите имя: " << std::endl;
	std::cin >> name;
	std::cout << func.greet(name);
	system("pause");

	return 0;
}