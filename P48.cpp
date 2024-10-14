// P48.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

float MonthlyPayment(float LoanAmount, float TotalMonths) {

    return (LoanAmount / TotalMonths);
}
int main()
{// Loan Instalment Months
    float LoanAmount = ReadPositiveNumber("Enter the Loan amount: ");
    float TotalMonths = ReadPositiveNumber("Enter how many months you want to settle the loan : ");
        
   
    
    cout << endl << "your total is: " << MonthlyPayment(LoanAmount,TotalMonths) << " $ per month\n";

    return 0;

}
