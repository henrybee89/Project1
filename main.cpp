#include <iostream>
#include <fstream>
#include "Days.h"
#include <iomanip>
#include <string>
#include "Months.h"
using namespace std;


void printCalander(int);
void whatDay(int);

int main()
{
	int choice = 0;

	cout << "Welcome!\n What month would you like to view?\n";
	cin >> choice;
	
	printCalander(choice);

	cout << endl;
	cout << "What day do you want to view?" << endl;
	cin >> choice;
	whatDay(choice);	
	cout << endl;
	return 0;
}

void printCalander(int x)
{
	Months January ("January", 31, 1);
	Months February ("February", 28, 2);
	Months March ("March", 31, 3);
	Months April ("April", 30, 4);
	Months May ("May", 31, 5);
	Months June ("June", 30, 6);
	Months July ("July", 31, 7);
	Months August ("August", 31, 8);
	Months September ("September", 30, 9);
	Months October ("October", 31, 10);
	Months November ("November", 30, 11);
	Months December ("December", 31, 12);


	if (x == 1){
		cout << January.daysInMonth() << endl;
		January.printDays();
	}	
	else if (x == 2){
		cout << February.daysInMonth() << endl;
		February.printDays();
	}
	else if (x == 3){
		cout << March.daysInMonth() << endl;
		March.printDays();
	}
	else if (x == 4){
		cout << April.daysInMonth() << endl;
		April.printDays();
	}
	else if (x == 5){
		cout << May.daysInMonth() << endl;
		May.printDays();
	}
	else if (x == 6){
		cout << June.daysInMonth() << endl;
		June.printDays();
	}
	else if (x == 7){
		cout << July.daysInMonth() << endl;
		July.printDays();
	}
	else if (x == 8){
		cout << August.daysInMonth()<< endl;
		August.printDays();
	}
	else if (x == 9){
		cout << September.daysInMonth()<< endl;
		September.printDays();
	}
	else if (x == 10){
		cout << October.daysInMonth()<< endl;
		October.printDays();
	}
	else if (x == 11){
		cout << November.daysInMonth()<< endl;
		November.printDays();
	}
	else if (x == 12){
		cout << December.daysInMonth()<< endl;
		December.printDays();
	}
	else
		cout << "GOODD";
}

void whatDay(int x)
{
	Days Monday ("Mondays Notes");
	if (x == 1)
	{
		Monday.printNotes();
	}
	else 
	{
		Monday.readNotes();
	}
		
}

