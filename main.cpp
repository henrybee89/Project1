#include <iostream>

#include <iomanip>
#include <string>
#include "Days.h"
#include "Months.h"
using namespace std;

int startDay(int);
void printCalander(int);
void printDays (int, int);
int main()
{
	int choice = 0;
	int day1 = 31;
	int day2 = 11;

	Days Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday;
	
	
	
	//Months January = Months("January");

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
	printDays (day1, day2);
	cout << endl;
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
	else if (x == 5)
		cout << May.daysInMonth() << endl;
	else if (x == 6)
		cout << June.daysInMonth() << endl;
	else if (x == 7)
		cout << July.daysInMonth() << endl;
	else if (x == 8)
		cout << August.daysInMonth()<< endl;
	else if (x == 9)
		cout << September.daysInMonth()<< endl;
	else if (x == 10)
		cout << October.daysInMonth()<< endl;
	else if (x == 11)
		cout << November.daysInMonth()<< endl;
	else if (x == 12)
		cout << December.daysInMonth()<< endl;
	else
		cout << "GOODD";
}

void printDays (int totalDays, int weekDay)
{
	int day = 1;
	weekDay = startDay(weekDay);

	while (day <= totalDays)
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

int startDay (int day)
{
	if (day == 1)

	{
		return 0;


	}
	else if (day == 2)
	{
		for (int i=1; i < 10; ++i)
		{cout << " ";}

		return 4;
	}
	else if (day == 3)
	{
		for (int i = 1; i < 10; ++i)
		{cout << " ";}
	
		return 4;
	}
	else if (day == 4)
	{
		for (int i = 1; i<19; ++i)
		{cout << " ";}
		return 7;
	}

	else if (day == 5)
	{
		for (int i = 1; i<7; ++i)
		{cout << " ";}
		return 2;
	}
	
	else if (day == 6)
	{
		for (int i = 1; i<13; ++i)
		{cout << " ";}
		return 5;
	}

	else if (day == 7)
	{
		for (int i = 1; i<22; ++i)
		{cout << " ";}
		return 7;
	}

	else if (day == 8)
	{
		for (int i = 1; i<7; ++i)
		{cout << " ";}
		return 3;
	}

	else if (day == 9)
	{
		for (int i = 1; i<16; ++i)
		{cout << " ";}
		return 6;
	}

	else if (day == 10)
	{
		for (int i = 1; i<0; ++i)
		{cout << " ";}
		return 0;
	}

	else if (day == 11)
	{
		for (int i = 1; i<10; ++i)
		{cout << " ";}
		return 4;
	}

	else if (day == 12)
	{
		for (int i = 1; i<16; ++i)
		{cout << " ";}
		return 6;
	}
	else 
	{	return 0;
	}
}
