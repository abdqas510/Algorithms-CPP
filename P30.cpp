// P30.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int ReadPositive(string msg) {
    int num;
    do {
    cout << msg << endl;
    cin >> num;

    } while (num < 0);
    return num;
}
int Factorial(int num) {
    int FactorialFinal = 1;

    for (int i = num; i > 0; i--) {
        FactorialFinal = FactorialFinal * i;
    }
    return FactorialFinal;
}

int FactorialWhile(int num) {
    int FactorialFinal = 1 ;
    int i = num;
    while (i > 0 && num > 0) {
        
        FactorialFinal = FactorialFinal * i;
        i -= 1;

    }
    return FactorialFinal;
}
int main()
{
    int num;
    num = ReadPositive( "enter the number to calculate it's Factorial: ");
    cout << "The Factorial is: " << Factorial(num) << endl;
    cout << "using while loop: \n";
    cout << "The Factorial is: " << FactorialWhile(num) << endl;




    return 0;
}

