#include <iostream>
#include <string>

enum professionList { driver, psychologist, programmer, hopeless, invalid };

int main()
{
	int yourAge{};
	int gameOverAge{ 30 }; 

	std::string yourGender{}; // символическая переменная, которая никак не влияет на работу программы
	std::string yourProfessionInput{}; // переменная для хранения введеного пользователем значения

	professionList professionIs{ invalid }; // переменная для обращения к перечислению	

	std::cout << "Enter your gender: male or female" << std::endl << "\n";
	std::getline(std::cin, yourGender);
	std::cout << "\n";

	std::cout << "Enter your profession: psychologist, driver or programmer" << std::endl << "\n";
	std::getline(std::cin, yourProfessionInput);
	std::cout << "\n";

	std::cout << "Enter your age" << std::endl << "\n";
	std::cin >> yourAge;
	std::cout << "\n";

	std::cout << "Your gender: " << yourGender << "\n" << "Your age: " << yourAge << "\n" << "Your profession: " << yourProfessionInput << "\n";
	std::cout << "\n";

	if (yourAge <= gameOverAge)
	{
		if (yourProfessionInput == "driver")
		{
			professionIs = driver;
		}
		else if (yourProfessionInput == "psychologist")
		{
			professionIs = psychologist;
		}
		else if (yourProfessionInput == "programmer")
		{
			professionIs = programmer;
		}		
	}
	else
	{
		professionIs = hopeless;
	}

	

	std::string divinationResult
	{
		professionIs == 0 ? "Attention! Your profession will be disappear very soon. Quickly go study something!"
		: professionIs == 1 ? "You need to learn to collaborate with AI immediately."
		: professionIs == 2 ? "Maybe, you have a small chance..."
		: professionIs == 3 ? "Your time is up. Please, try again never"
		: "Error! Attention is the key to success. The devil is in the details!"
	};

	std::cout << divinationResult << std::endl;

	std::cout << "\n";

}