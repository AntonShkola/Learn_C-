#include <iostream>

using namespace std;

int main()
{
	const int size{ 10 };
	int numbers[size]{ 45, 23, 67, 12, 89, 34, 78, 91, 15, 56 };
	bool swap;

	cout << "Original array: ";
	for (int element{}; element < size; ++element) // ����� ������������� ������� � �������
	{
		cout << numbers[element] << ' ';
	}
	cout << endl;

	for (int element{}; element < size - 1; ++element) // ���������� ����������� �������� ����������
	{
		swap = false;

		for (int check{}; check < size - element - 1; ++check) // ��������� � ����� �������� ��������� �� ������ �������
		{
			if (numbers[check] < numbers[check + 1]) // ������ �������, ���� ����� ������ �������
			{
				int temporary = numbers[check];
				numbers[check] = numbers[check + 1];
				numbers[check + 1] = temporary;
				swap = true;
			}
		}

		if (!swap)
		{
			break;
		}
	}

	cout << "Sorted array: ";
	for (int element{}; element < size; ++element)
	{
		cout << numbers[element] << " ";
	}
	cout << endl;

	return 0;
}