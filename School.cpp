#include "School.h"
#include <string>
using namespace std;

School::School()
{
	_user = "HENRY";
}
School::School(string user) : _user(user)
{
}

School::~School()
{
}
