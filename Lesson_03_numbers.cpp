#include <iostream>
#include <Windows.h>

int main()
{

	int a{}; 
	int b{}; 
	int c{}; 

	std::cout << "Enter the first number" << std::endl;
	std::cin >> a;

	std::cout << "\n";

	std::cout << "Enter the second number" << std::endl;
	std::cin >> b;

	std::cout << "\n";

	std::cout << "Enter the third number" << std::endl;
	std::cin >> c;

	std::cout << "\n";


	int max{ a > b ? (a > c ? a : c) : (b > c ? b : c) }; 
	int min{ a < b ? (a < c ? a : c) : (b < c ? b : c) }; 
	int mid{ (a != min && a != max) ? a : (b != min && b!= max) ? b: c}; 

	std::cout << max << mid << min;		

	return 0;
}