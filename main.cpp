#include <iostream>
#include <string>
#include "Days.h"
#include "Months.h"
using namespace std;


int main()
{
	Days Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday;
	Months January, February, March, April, May, June, July, August, September, October, November, December;

	January.daysInMonth = 31;

	Monday.day = "Monday";
	Tuesday.day = "Tuesday";
	Wednesday.day = "Wednesday";
	Thursday.day = "Thursday";
	Friday.day = "Friday";
	Saturday.day = "Saturday";
	Sunday.day = "Sunday";

	cout << Monday.day << Tuesday.day << Wednesday.day << Thursday.day << Friday.day << Saturday.day << Sunday.day;


	return 0;
}

