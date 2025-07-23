#include <iostream>

using namespace std;

namespace addition
{
	int calc(int x, int y)
	{	
		return x + y;
	}
}
namespace substraction
{
	int calc(int x, int y)
	{
		return x - y;
	}
}

namespace multiplication
{
	int calc(int x, int y)
	{
		return x * y;
	}
}

namespace division
{
	int calc(int x, int y)
	{
		return x / y;
	}
}

int main()
{
	int x{ 6 };
	int y{ 3 };

	cout << "x = " << x << ", y = " << y << endl;
	cout << "addition: " << addition::calc(x,y) << endl;
	cout << "subtraction: " << substraction::calc(x,y) << endl;
	cout << "multiplication: " << multiplication::calc(x,y) << endl;
	cout << "division: " << division::calc(x,y) << endl;

	return 0;
}