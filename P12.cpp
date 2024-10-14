// P12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void ReadNumbers(int& Num1, int& Num2) {
    cout << "Enter First number: ";
    cin >> Num1;
    cout << "Enter Second Number: ";
    cin >> Num2;
}
int MaxOf2Nmbers(int Num1, int Num2) {
    if (Num1 > Num2) {
        return Num1;
    }
    else {
        return Num2;
    }
}
void PrintResults(int Max) {
    cout << "the max number is : " << Max <<endl;
}
int main()
{
    int Num1, Num2;
    ReadNumbers(Num1, Num2);
    PrintResults(MaxOf2Nmbers(Num1, Num2));


    return 0;

}


