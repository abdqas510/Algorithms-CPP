// P49.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
string ReadPin() {
	string Pin;
	cout << "Enter your PIN\n";
	cin >> Pin;

	return Pin;
}

bool Login() {


	string Pin;

	do {

		Pin = ReadPin();

		if (Pin == "1234") {

			return 1;

		}
		else {

			cout << "Wring Number \n";

			system("color 4F");

		}
	} while (Pin != "1234");

}


int main()
{
	
	if (Login()) {

		system("color 2F");
		cout << "your Balance is : " << 7500;

	}

	
	return 0;

}

