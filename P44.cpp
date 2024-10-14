// P44.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

enum enDays{ Sunday = 1, Monday = 2, Tuesday = 3,Wednesday = 4, Thursday = 5,Friday = 6, Saturday = 7 };

int ReadNumberInRange(string msg, int From, int To) {

	int num;
	do {
		cout << msg;
		cin >> num;
	} while (num < From || num > To);
	return num;
}

enDays ReadDays() {

	return enDays(ReadNumberInRange("Enter the day of the week: ",1,7));
}

string PrintDayName(enDays Day) {

	switch (Day) {
	case enDays::Sunday:
		return "Sunday";
		
	case enDays::Monday:
		return "Monday";
		
	case enDays::Tuesday:
		return "Tuesday";
		
	case enDays::Wednesday:
		return "Wednesday";
		
	case enDays::Thursday:
		return "Thursday";
		
	case enDays::Friday:
		return "Friday";
		
	case enDays::Saturday:
		return "Saturday";
		
	default:
		return  "Wrong Day";

	}

}
int main()
{
	 
	
	cout << PrintDayName(ReadDays());


	/*if (day >= 1 && day <= 7) {
		if (day == 1) {
			cout << "Sunday";
		}
		else if (day == 2) {
			cout << "Monday";
		}
		else if (day == 3) {
			cout << "Tuesday";
		}
		else if (day == 4) {
			cout << "Wednesday";
		}
		else if (day == 5) {
			cout << "Thursday";
		}
		else if (day == 6) {
			cout << "Friday";
		}
		else {

			cout << "Saturday";
		}
	}
	else {
		cout << "Wrong Day";
	}*/


	return 0;


}
