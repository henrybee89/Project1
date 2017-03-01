#include <iostream>
#include "Months.h"
#include <string>
using namespace std;

string Months::daysInMonth()
{
string whatMonth = month + "\n";
whatMonth += " S  M  T  W  T  F  S\n";
whatMonth += "____________________\n";

return whatMonth;
}

Months::Months ()
{
	month = "BLANK";
}

