#include <iostream>

using namespace std;

int main()
{
	int a{}; 
	int b{}; 
	int c{}; 

	cout << "Enter the first number" << endl;
	cin >> a;

	cout << "\n";

	cout << "Enter the second number" << endl;
	cin >> b;

	cout << "\n";

	cout << "Enter the third number" << endl;
	cin >> c;

	cout << "\n";

	int max{ a > b ? (a > c ? a : c) : (b > c ? b : c) }; 
	int min{ a < b ? (a < c ? a : c) : (b < c ? b : c) }; 
	int mid{ a + b + c - max - min };

	cout << max << " " << mid << " " << min;

	cout << "\n";

	return 0;
}