#pragma once
#include <string>

class Months
{
	private:
		std::string _month;
	public:
		Months();
		Months(std::string month);
		std::string daysInMonth();
		int daysInCalander();

};
