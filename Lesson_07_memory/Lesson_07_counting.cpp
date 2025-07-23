#include <iostream>

using namespace std;

int counting_function()
{
	static int number{};
	number++;
	cout << "Number of function calls " << number << endl;

	return 0;
}

int main()
{
	for (int i = 0; i < 15; i++)
	{
		counting_function();
	}

	return 0;
}
