#include <iostream>
#include <string>
#include "Days.h"
#include "Months.h"
using namespace std;

void printCalander(int);

int main()
{
	int choice = 0;

	Days Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday;
	
	
	
	Months January = Months("January");

	Monday.day = "Monday";
	Tuesday.day = "Tuesday";
	Wednesday.day = "Wednesday";
	Thursday.day = "Thursday";
	Friday.day = "Friday";
	Saturday.day = "Saturday";
	Sunday.day = "Sunday";

	
	cout << "Welcome!\n What month would you like to view?\n";
	cin >> choice;
//	cout << January.daysInMonth() << endl;
	printCalander(choice);
	return 0;
}

void printCalander(int x)
{
	Months January = Months("January");
	Months February = Months("February");
	Months March = Months ("March");
	Months April = Months ("April");
	Months May = Months ("May");
	Months June = Months ("June");
	Months July = Months ("July");
	Months August = Months ("August");
	Months September = Months ("September");
	Months October = Months ("October");
	Months November = Months ("November");
	Months December = Months ("December");


	if (x == 1)
		cout << January.daysInMonth() << endl;
	else if (x == 2)
		cout << February.daysInMonth() << endl;
	else if (x == 3)
		cout << March.daysInMonth() << endl;
	else if (x == 4)
		cout << April.daysInMonth() << endl;
	else
		cout << "GOODD";
}
