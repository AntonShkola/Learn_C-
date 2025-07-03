#include <iostream>

using namespace std;

int main()
{
	const int size{ 10 };
	int numbers[size]{ 45, 23, 67, 12, 89, 34, 78, 91, 15, 56 };
	bool swap;

	cout << "Original array: ";
	for (int element{}; element < size; ++element) // вывод оригинального массива в консоль
	{
		cout << numbers[element] << ' ';
	}
	cout << endl;

	for (int element{}; element < size - 1; ++element) // управление количеством итераций сортировки
	{
		swap = false;

		for (int check{}; check < size - element - 1; ++check) // сравнение и обмен соседних элементов на каждом проходе
		{
			if (numbers[check] < numbers[check + 1]) // меняем местами, если левый меньше правого
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