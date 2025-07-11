#include <iostream>

using namespace std;

int fibonacci(int n)
{
	if (n == 0)
	{
		return 0;
	}

	if (n == 1)
	{
		return 1;
	}

	return fibonacci(n - 1) + fibonacci(n - 2);
}


int main()
{
	int n;

	cout << "Enter the number ";
	cin >> n;

	if (n < 0)
	{
		cout << "Please enter a non-negative number " << endl;
		return 1;
	}

	cout << "Fibonacci numbers ";

	for (int i = 0; i < n; i++)
	{
		cout << fibonacci(i) << ' ';
	}
	cout << endl;

	return 0;
}