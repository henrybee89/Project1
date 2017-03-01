#include <iostream>
#include <string>
#include "Days.h"
#include "Months.h"
using namespace std;


int main()
{
	Days Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday;
	
	
	
	Months January;

	Monday.day = "Monday";
	Tuesday.day = "Tuesday";
	Wednesday.day = "Wednesday";
	Thursday.day = "Thursday";
	Friday.day = "Friday";
	Saturday.day = "Saturday";
	Sunday.day = "Sunday";

	January.month = "       January";
	
	cout << January.daysInMonth() << endl;

	return 0;
}

