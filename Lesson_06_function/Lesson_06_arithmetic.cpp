#include <iostream>

using namespace std;

int sum(int a, int b)
{
	int s = a + b;

	return s;
}

int diff(int a, int b)
{

	int diff = a - b;

	return diff;

}

int multiplication(int a, int b)
{
	int mult = a * b;

	return mult;
}

double division(int a, int b)
{
	double a_double = static_cast<double>(a);
	double b_double = static_cast<double>(b);

	double div = a_double / b_double;

	return div;
}

int main()
{
	int a = 5;
	int b = 10;

	int s = sum(a, b);
	int dif = diff(a, b);
	int mult = multiplication(a, b);
	double div = division(a, b);

	cout << a << " + " << b << " = " << s << endl;
	cout << a << " - " << b << " = " << dif << endl;
	cout << a << " * " << b << " = " << mult << endl;
	cout << a << " / " << b << " = " << div << endl;
	
	return 0;
}

