// P37.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
int ReadNumber(string msg) {

	int num;
	cout << msg << endl;
	cin >> num;
	return num;

}
int sumWhile() {
	int num = 0,sum = 0, counter = 1;
	 do{
		
		
		num = ReadNumber("Enter number "+to_string(counter)) ;

		if (num == -99) {

			break;

		}

		sum = sum + num;
		counter++;
		

	 } while (num != -99);

	 return sum;
	
}
int main()
{
	cout << "the total sum is : " << sumWhile() << endl;

	return 0;
}

