#include <iostream>
#include <cmath>
void main()
{
	//2 variables
	float first = 0;
	float second = 0;

	std::cout << "Enter the first number: " << std::endl;
	std::cin >> first;

	//check if std::cin was an int if not std::cin is a string for example then std::cin.fail returns true and triggers the if
	if (std::cin.fail()) {
		std::cout << "You didn't enter an integer. We'll just use '5' instead."
			<< std::endl;
		first = 5;
		std::cin.clear();
		std::cin.ignore(std::cin.rdbuf()->in_avail());
	}

	std::cout << "Enter the second number: " << std::endl;
	std::cin >> second;

	if (std::cin.fail()) {
		std::cout << "You didn't enter an integer. We'll just use '8' instead." << std::endl;
		second = 8;
		std::cin.clear();
		std::cin.ignore(std::cin.rdbuf()->in_avail());
	}
	if (second == 0) {
			std::cout << "lets round up shall we" << std::endl;
			second = 1;
			std::cin.clear(); //bam and the dirt is gone
			std::cin.ignore(std::cin.rdbuf()->in_avail());



	
	}


	std::cout << "The two numbers entered are: " << first << " and " << second << "." << std::endl;
	std::cout << first << " + " << second << " = " << (first + second) << std::endl;
	std::cout << first << " - " << second << " = " << (first - second) << std::endl;
	std::cout << first << " / " << second << " = " << (first / second) << std::endl;
	std::cout << first << " * " << second << " = " << (first * second) << std::endl;
//	std::cout << first << " % " << second << " = " << (first % second) << std::endl;
	//if I want to use float numbers I can convert the to ints but it makes little sense to get the remainder if you are using a decimal place
	// googled and something called fmod might be usefull tried int(first) etc to force type but seemed pointless
	


	//screw you windows we now cater to all OS
	//system("pause");

	//wait up there

	std::cout << std::endl << "Press 'Enter' to exit the program." << std::endl;
	std::cin.ignore(std::cin.rdbuf()->in_avail());
	std::cin.get();


	//this code was not holding the program but above works why???
	//std::cout << std::endl << "Press 'Enter' to exit the program." << std::endl;
	//std::cin.get();


}