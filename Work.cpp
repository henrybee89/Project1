#include <string>
#include "Work.h"
using namespace std;

Work::Work()
{
	_user = "BOB";
}
Work::Work(string user) : _user(user)
{
}

Work::~Work()
{
}
