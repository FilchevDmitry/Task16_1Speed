#include <iostream>
#include<string>
#include<sstream>

int main()
{
	std::stringstream text;
	std::string deltaSpeed;
	bool end = true;
	do {
		std::cout << "Enter the speed delta : ";
		std::cin >> deltaSpeed;
		double num = stod(deltaSpeed);
		text.str("");
		text << "The speed of the car : " << num;
		std::cout << text.str() << std::endl;
		
	} 
	while (end);
}

