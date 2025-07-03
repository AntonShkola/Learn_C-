#include <iostream>

using namespace std;

int main()
{
	const int size{ 10 };
	int numbers[size]{ 35,76,90,12,47,38,85,66,18,50 };

	int max = numbers[0];
	int min = numbers[0];


	for (int element{ 1 }; element < size; ++element)
	{
		
		if (numbers[element] > max)
		{
			max = numbers[element];
		}

		if (numbers[element] < min)
		{
			min = numbers[element];
		}			

	}

	cout << "Maximum value: " << max << endl;
	cout << "Minimum value: " << min << endl;

}