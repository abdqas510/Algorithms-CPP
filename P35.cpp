// P35.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
struct stBankCurrency {
    int pennies, nickels, dimes, quarters, dollars;
};
stBankCurrency ReadData() {

    stBankCurrency BankCurrency;

    cout << "Enter the number of pennies: ";
    cin >> BankCurrency.pennies;
    cout << "Enter the number of nickles: ";
    cin >> BankCurrency.nickels;
    cout << "Enter the number of dimes: ";
    cin >> BankCurrency.dimes;
    cout << "Enter the number of quarters: ";
    cin >> BankCurrency.quarters;
    cout << "Enter the number of dollars: ";
    cin >> BankCurrency.dollars;
    cout << endl;

    return BankCurrency;

}

int TotalPennies(stBankCurrency BankCurrency) {

    float totalPennies = BankCurrency.pennies + BankCurrency.nickels * 5 + BankCurrency.dimes * 10 + BankCurrency.quarters * 25 + BankCurrency.dollars * 100;

    return totalPennies;
}
int main()
{// piggy bank
    
  
    int totalPennies = TotalPennies(ReadData());
    
    float totalDollars = float(totalPennies) / 100;

    cout << "All Pennies you are have are: " << totalPennies << endl;
    cout << "All Dollars you are have are: " << totalDollars << endl;

    return 0;

}
