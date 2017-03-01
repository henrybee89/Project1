#include <iostream>
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
}

Months::Months (string month) : _month(month)
{
}

int daysInCalander(int x)
{
	if (x == 1)
		return 31;
	else if (x == 2)
		return 28;
	else if (x == 3)
		return 31;
	else if (x == 4)
		return 30;
	else if (x == 5)
		return 31;
	else if (x == 6)
		return 30;
	else if (x == 7)
		return 31;
	else if (x == 8)
		return 31;
	else if (x == 9)
		return 30;
	else if (x == 10)
		return 31;
	else if (x == 11)
		return 30;
	else if (x == 12)
		return 31;
	else 
		return 0;
}
