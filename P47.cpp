// P47.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

float ReadPositiveNumber(string msg) {

    int num;
    do {
        cout << msg;
        cin >> num;
    } while (num < 0);

    return num;
}


float TotalMonths(float LoanAmount, float MonthlyPayment) {

    return (LoanAmount / MonthlyPayment);
}

int main()
{// Loan Instalment Months
    float LoanAmount = ReadPositiveNumber("Enter the Loan amount: ");
    float MonthlyPayment = ReadPositiveNumber("Enter the monthly payment: ");
      
    
     cout << endl << "you need " << TotalMonths(LoanAmount,MonthlyPayment) << " months\n";

     return 0;

}
