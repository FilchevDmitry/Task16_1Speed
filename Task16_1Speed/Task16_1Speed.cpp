#include <iostream>
#include<string>
#include<sstream>
#include<cstdio>
bool check(std::string val)
{
	for (int i = 0; i < val.length(); i++)
	{
		if (val[i] < '+' || val[i]>'9')
			return false;
		else
			return true;
	}
}
bool eps(double val)
{
	return (val >= (0.0 - 0.01)) && (val <= (0.0 + 0.01));
}
int main()
{
	char speed_str[100];
	double speed_value=0.0;
	bool end = true;
	std::string val;
	do 
	{
		std::cout << "Enter the speed delta : ";
		std::cin >> val;
		if (check(val))
		{
			speed_value += stod(val);
			if (speed_value > 150)
				speed_value = 150;
			if (eps(speed_value))
			{
				std::cout << "the car stopped" << std::endl;
				break;
			}
			std::sprintf(speed_str, "The speed of the car is %.1f", speed_value);
			std::cout << speed_str << std::endl;
		}
		else 
		{	
			std::cout << "Wrong" << std::endl;
		}

	} 
	while (end);

}

