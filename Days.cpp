#include "Days.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

Days::Days()
{
	_notes = "BLANK";
}

Days::Days(string notes) : _notes(notes)
{
}

Days::~Days()
{
}

void Days::printNotes()
{
	string _notes;
	cout << "Enter your notes" << endl;
	cin >> _notes;
	ofstream myfile ("notes.txt");
	if (myfile.is_open())
	{
		myfile << _notes;
		myfile.close();
	}
	else cout << "UNable to open file";
}

void Days::readNotes()
{
	string _notes;
	ifstream myfile ("notes.txt");
	if (myfile.is_open())
	{
		while (getline (myfile, _notes) )
		{
			cout << _notes << '\n';
		}
		myfile.close();
	}
	else cout << "Unable to open file";
}
