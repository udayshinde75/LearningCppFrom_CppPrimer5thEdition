// Calculator

#include <iostream>

int main()
{
	int val1, val2;
	std::string operand;
	bool process = true;
	while(process)
	{
		std::cout << "Enter numbers : " << std::endl;
		std::cout << "Number 1 : ";
		std::cin >> val1;
		std::cout << "Number 2 : ";
		std::cin >> val2;
		std::cout << "Operand +, -, *, / : ";
		std::cin >> operand;
		if (operand == "+") {std::cout << "addition :" << val1 + val2 << std::endl;}
		else if (operand == "-") {std::cout << "addition :" << val1 - val2 << std::endl;}
		else if (operand == "*") {std::cout << "addition :" << val1 * val2 << std::endl;}
		else if (operand == "/") {std::cout << "addition :" << val1 / val2 << std::endl;}

		std::cout << "Continue Calculator y, n :";
		std::cin >> operand;
		if (operand == "y") {process = true;}
		else {process = false;}
	}
	std::cout << "Thanks for using :) have a great day" << std::endl;
}