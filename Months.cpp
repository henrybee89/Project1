#include <iostream>
#include <iomanip>
#include "Months.h"
#include <string>
using namespace std;

string Months::daysInMonth()
{
string whatMonth =  _month + "\n";
whatMonth += " S  M  T  W  T  F  S\n";
whatMonth += "____________________\n";

return whatMonth;
}

Months::Months ()
{
	_month = "BLANK";
	_daysInCalander = 0;
	_startDay = 0;
}

Months::Months (string month, int daysInCalander, int startDay) : _month(month), _daysInCalander(daysInCalander), _startDay(startDay)
{
}
Months::~Months()
{
}

int Months::startDay ()
{
	if (_startDay == 1)

	{
		return 1;


	}
	else if (_startDay == 2)
	{
		for (int i=1; i < 10; ++i)
		{cout << " ";}

		return 4;
	}
	else if (_startDay == 3)
	{
		for (int i = 1; i < 10; ++i)
		{cout << " ";}
	
		return 4;
	}
	else if (_startDay == 4)
	{
		for (int i = 1; i<19; ++i)
		{cout << " ";}
		return 7;
	}

	else if (_startDay== 5)
	{
		for (int i = 1; i<7; ++i)
		{cout << " ";}
		return 2;
	}
	
	else if (_startDay== 6)
	{
		for (int i = 1; i<13; ++i)
		{cout << " ";}
		return 5;
	}

	else if (_startDay== 7)
	{
		for (int i = 1; i<22; ++i)
		{cout << " ";}
		return 7;
	}

	else if (_startDay== 8)
	{
		for (int i = 1; i<7; ++i)
		{cout << " ";}
		return 3;
	}

	else if (_startDay== 9)
	{
		for (int i = 1; i<16; ++i)
		{cout << " ";}
		return 6;
	}

	else if (_startDay== 10)
	{
		for (int i = 1; i<0; ++i)
		{cout << " ";}
		return 1;
	}

	else if (_startDay== 11)
	{
		for (int i = 1; i<10; ++i)
		{cout << " ";}
		return 4;
	}

	else if (_startDay== 12)
	{
		for (int i = 1; i<16; ++i)
		{cout << " ";}
		return 6;
	}
	else 
	{	return 0;
	}
}

void Months::printDays ()
{
	int day = 1;
	int weekDay = startDay();

	while (day <= _daysInCalander)
	{
		cout << setw(2) << day << " ";
		if (weekDay == 7)
		{
			cout << endl;
			weekDay = 1;
		}
	else weekDay = weekDay + 1;
	day = day + 1;
	}
}

