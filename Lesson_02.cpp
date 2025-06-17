#include <iostream>
#include <Windows.h>
#include <string>

int main()
{
	SetConsoleCP(1251); // для ввода
	SetConsoleOutputCP(1251); // для вывода

	int myNumber;
	std::string myWord;

	std::cout << "Enter number" << std::endl;
	std::cin >> myNumber;
	std::cout << "Your number: " << myNumber << "\n" << std::endl;	

	std::cout << "Enter word" << std::endl;
	std::cin >> myWord;
	std::cout << "Your word: " << myWord << "\n";

	return EXIT_SUCCESS;
}