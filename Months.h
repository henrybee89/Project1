#pragma once
#include <string>

class Months
{
	private:
		std::string _month;
		int _daysInCalander;
		int _startDay;
	public:
		Months();
		Months(std::string month, int daysInCalander, int startDay);
		std::string daysInMonth();
		int startDay();
		void printDays();
		~Months();

};
