#include <iostream>

int main()
{
	int number = 0;

	while (number <= 50)
	{
		if (~number % 2 == 0) 
		/*
			While I was doing this exercise Visual Studio showed me a warning to change '!' to '~' to negate a expression.
			To show even numbers: remove the '~' from the if.
			To show odd numbers: use this code as it is.
		*/ 
		{
			std::cout << number << "\n";
			number++;
		}
		else
			number++;
	}
	system("PAUSE");
}