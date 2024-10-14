// P31.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;
int ReadNumber() {

    short num1;
    cout << "Enter the number :\n";
    cin >> num1;
    return num1;
    

}
void RoundedPower(short num1) {

    cout << num1 * num1 << "\t";
    cout << num1 * num1 * num1 << "\t";
    cout << num1 * num1 * num1 * num1 << "\a";

    

}

int main()
{ //power of 2, 3, 4
   
    RoundedPower(ReadNumber());

    return 0;







}

