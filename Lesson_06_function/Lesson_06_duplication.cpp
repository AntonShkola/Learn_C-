#include <iostream>

using namespace std;

int myFunction(int a, int b, int& c)
{
	c = 1;
	for (int i = 0; i < b; i++)
	{
		c = c * a;
	}

	return c;
}

int main()
{

	int value = 5; // число, возводимое в степень
	int power = 2; // степень
	int result = 1; // результат возведения	

	myFunction(value, power, result);
	cout << value << " to the power of " << power << " = " << result << endl;

	value = 3;
	power = 3;

	myFunction(value, power, result);
	cout << value << " to the power of " << power << " = " << result << endl;
	
	value = 4;
	power = 4;

	myFunction(value, power, result);
	cout << value << " to the power of " << power << " = " << result << endl;

	return 0;
	
}
