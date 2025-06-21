#include <iostream>
#include <string>

enum dayToday { monday, tuesday, wednesday, thursday, friday, saturday, sunday, invalid }; // список перечисления дней недели

int main()
{
	std::string input{}; //переменная для хранения введенного пользователем значения
	dayToday todayIs{ invalid };  //целочисленная переменная для обращения к перечислению

	std::cout << "What day is it today?" << std::endl << "\n";
	std::getline(std::cin, input);
	std::cout << "\n";

	if (input == "monday")
	{
		todayIs = monday;
	}
	else if (input == "tuesday")
	{
		todayIs = tuesday;
	}
	else if (input == "wednesday")
	{
		todayIs = wednesday;
	}
	else if (input == "thursday")
	{
		todayIs = thursday;
	}
	else if (input == "friday")
	{
		todayIs = friday;
	}
	else if (input == "saturday")
	{
		todayIs = saturday;
	}
	else if (input == "sunday")
	{
		todayIs = sunday;
	}


	switch (todayIs)
	{
	case monday:
		std::cout << "Right. Today is monday. Good morning!" << std::endl;
		break;
	case tuesday:
		std::cout << "Right. Today is tuesday. Have a nice day!" << std::endl;
		break;
	case wednesday:
		std::cout << "Right. Today is wednesday. You are the best!" << std::endl;
		break;
	case thursday:
		std::cout << "Right. Today is thursday. You'll can!" << std::endl;
		break;
	case friday:
		std::cout << "Right. Today is friday. Nice to meet you!" << std::endl;
		break;
	case saturday:
		std::cout << "Right. Today is saturday. Chill out..." << std::endl;
		break;
	case sunday:
		std::cout << "Right. Today is sunday. I'am offline" << std::endl;
		break;
	default:
		std::cout << "Time doesn't exist...always remember it" << std::endl;
		break;
	}

	std::cout << "\n";


	std::string dayResult
	{
		todayIs == 0 ? "Day for a new beginning"
		: todayIs == 1 ? "Day for rethinking something important"
		: todayIs == 2 ? "Day for time out"
		: todayIs == 3 ? "Day for preparation"
		: todayIs == 4 ? "Day for grow up"
		: todayIs == 5 ? "Day for chill"
		: todayIs == 6 ? "Day for outdoor"
		: "Please, try again never"
	};

	std::cout << dayResult << std::endl;


	return EXIT_SUCCESS;
}


//++exampleVar1; сначала изменяет значение переменной, потом возвращает новое значение
//exampleVar2++; сначала возвращает текущее значение переменной, потом меняет ее значение