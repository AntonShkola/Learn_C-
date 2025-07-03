#include <iostream>

using namespace std;

int main()
{
	const int rows{ 3 };      // количество подмассивов 
	const int columns{ 6 };   // количество элементов в подмассиве

	int numbers[rows][columns]
	{
		{ 12, 56, 34, 89, 32, 90 },
		{ 13, 61, 25, 39, 48, 72 },
		{ 56, 68, 44, 10, 60, 69 }
	};

	int max = numbers[0][0];
	int min = numbers[0][0];

	int maxIndexRow{};
	int maxIndexCol{};

	int minIndexRow{};
	int minIndexCol{};

	for (int row{}; row < rows; ++row)
	{
		for (int column{}; column < columns; ++column)
		{
			cout << numbers[row][column] << '\t';

			if (numbers[row][column] > max)
			{
				max = numbers[row][column];
				maxIndexRow = row;
				maxIndexCol = column;
			}

			if (numbers[row][column] < min)
			{
				min = numbers[row][column];
				minIndexRow = row;
				minIndexCol = column;
			}
			
		}

		cout << endl;		
	}

	cout << endl;

	cout << "Minimum value index: " << minIndexRow << ' ' << minIndexCol << endl;
	cout << "Maximum value index: " << maxIndexRow << ' ' << maxIndexCol << endl;

	return 0;
}