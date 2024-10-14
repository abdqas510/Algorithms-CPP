// P33.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int ReadGrade() {

	int Grade;
	cout << "Enter your Grade: ";
	cin >> Grade;
	return Grade;

}

int NumberRange(int From, int To) {
	int num;
	do {

	   num =    ReadGrade();

	}while(!(num >= From && num <= To));

	return num;
}

void CompareGrades(int Grade) {

	if (Grade < 50) {
		cout << "Fail";
	}
	else  if (Grade >= 90) {
		cout << "A";
	}
	else  if (Grade >= 80) {
		cout << "B";
	}
	else  if (Grade >= 70) {
		cout << "C";
	}
	else  if (Grade >= 60) {
		cout << "D";
	}
	else  if (Grade >= 50) {
		cout << "E";
	}
}
int main()
{
	CompareGrades(NumberRange(0,100));


	return 0;
	
}


