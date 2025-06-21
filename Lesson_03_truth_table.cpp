#include <iostream>
#include <string>

int main()
{
	bool a{ true };
	bool b{ true };

	std::cout << "Operator ||" << std::endl << "\n";

	if (a || b)
	{		
		std::cout << std::boolalpha << a << "\t" << b << "\t" << "true" << std::endl;
		b = { false };
	}

	if ( a || b )
	{
		std::cout << std::boolalpha << a << "\t" << b << "\t" << "true" << std::endl;
		b = { true };
		a = { false };
	}

	if (a || b)
	{
		std::cout << std::boolalpha << a << "\t" << b << "\t" << "true" << std::endl;
		a = { false };
		b = { false };
	}

	if (!(a || b))
	{
		std::cout << std::boolalpha << a << "\t" << b << "\t" << "false" << std::endl;		
	}

	return 0;
}