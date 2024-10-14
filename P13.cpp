// P13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void ReadNumbers(int& Num1, int& Num2, int &Num3) {
    cout << "Enter First number: ";
    cin >> Num1;
    cout << "Enter Second Number: ";
    cin >> Num2;
    cout << "Enter Third Number: ";
    cin >> Num3;
}
int MaxOf3Nmbers(int Num1, int Num2, int Num3) {
   
    if (Num1 > Num2 && Num1 > Num3) {
        return Num1;
    }
    else if (Num2 > Num1 && Num2 > Num3) {
        return Num2;
    }
    else {
        return Num3;
    }
}
void PrintResults(int Max) {
    cout << "the max number is : " << Max << endl;
}
int main()
{
    int Num1, Num2, Num3;
    ReadNumbers(Num1, Num2, Num3);
    PrintResults(MaxOf3Nmbers(Num1, Num2, Num3));


    return 0;

}
