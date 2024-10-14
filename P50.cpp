// P50.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
	int counter = 0;
	do {

		Pin = ReadPin();

		if (Pin == "1234") {

			return 1;

		}
		else {
            counter++;
			cout << "Wrong Number \n" << "you have " << (3-counter) << " tries \n";

			system("color 4F");

					
		}
	} while (Pin != "1234" && counter!=3);
	return 0;
}


int main()
{

	if (Login()) {

		system("color 2F");
		cout << "your Balance is : " << 7500;

	}
	else {
		system("color 1F");
		cout << "your card is bloked call the bank \n";
	}


	return 0;

}









































//#include <iostream>
//using namespace std;
//void ValidationLoop() {
//    int PIN;
//    int Balance = 7500;
//    int i = 0;
//    while (i != 3) {
//        cout << "Please Enter PIN :\n";
//        cin >> PIN;
//        if (PIN == 1234) {
//            cout << "Balance : " << Balance << endl;
//            i = 2;
//        }
//        
//        else if (i == 2 && PIN !=1234) {
//            cout << "Card is locked \n";
//        }
//        else {
//            cout << "Not Correct\n";
//        }
//
//        i += 1;
//    }
//}
//int main()
//{
//    ValidationLoop();
//
//    return 0;
//
//}

