// P14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void ReadNumbers(short& num1, short& num2) {

    cout << "Enter first number:\n";
    cin >> num1;
    cout << "Enter second number:\n";
    cin >> num2;

}
void SwapFunction(short &num1, short &num2) {
    short swap;
    swap = num1;
    num1 = num2;
    num2 = swap;

    

}

void PrintResults(short num1, short num2) {
    cout << "the values Before the swap is => " << "the value of num1: " << num1 << " and the value of num2: " << num2 << endl;
    SwapFunction(num1, num2);
    cout << "the values After the swap is => " << "the value of num1: " << num1 << " and the value of num2: " << num2 << endl;

}
int main()
{   // swap numbers
    short num1, num2;
    ReadNumbers(num1, num2);
    PrintResults(num1, num2);   
    
    

    return 0;
}
