// P9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void ReadResults(short& num1, short& num2, short& num3) {

    cout << "Enter first number:\n";
    cin >> num1;
    cout << "Enter second number:\n";
    cin >> num2;
    cout << "Enter third number:\n";
    cin >> num3;


}

short sumOf3Numbers(short num1, short num2, short num3) {

    return (num1 + num2 + num3);

}

void PrintResults(short sum) {

    cout << endl <<  "sum = " << sum;

}

int main()
{  // sum of 3 numbers
    short num1, num2, num3;

    ReadResults(num1, num2, num3);
    PrintResults(sumOf3Numbers(num1,num2,num3));

 

    return 0;

}


