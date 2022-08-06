#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
#include "DynamicLeaver.h"





int main(int argc, char** argv)
{

	//SetConsoleOutputCP(65001);
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string name;
	Leaver func;

	std::cout << "Введите имя: " << name << std::endl;
	std::cin >> name;
	std::cout << func.leave(name);
	system("pause");
	return 0;
}