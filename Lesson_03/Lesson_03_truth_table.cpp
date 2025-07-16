#include <iostream>

using namespace std;

int main()
{
	bool values[] = { true, false };

	cout << "Operator: ||" << endl;
	cout << "\n";

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			bool a = values[j];
			bool b = values[i];
			bool result = a || b;
			cout << boolalpha << a << "\t" << b << "\t" << result << endl;
		}
	}
	cout << "\n";

	cout << "Operator: &&" << endl;
	cout << "\n";

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			bool a = values[j];
			bool b = values[i];
			bool result = a && b;
			cout << boolalpha << a << "\t" << b << "\t" << result << endl;
		}
	}
	cout << "\n";

	return 0;
}