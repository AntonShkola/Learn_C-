#include <iostream>

using namespace std;

int main()
{
	const int size{ 10 };
	int numbers[size]{ 1,2,3,4,5,6,7,8,9,10 };

	for (int element{}; element < size; ++element)
	{
		cout << numbers[element];

		if (element <= size - 2)
		{
		   cout << ", ";
		}		

	}

	return 0;
}