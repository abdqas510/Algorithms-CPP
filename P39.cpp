// P39.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
struct stCash {
    float TotalBill, CashPaid;
};

stCash ReadTotall() {
    stCash Cash;

    do {
    cout << "Enter the TotalBill: ";
    cin >> Cash.TotalBill;
    cout << "Enter the Cashpaid: ";
    cin >> Cash.CashPaid;

    } while (Cash.TotalBill < 0 && Cash.CashPaid < 0);

    return Cash;


}

float CalculateReminder(stCash Cash) {

    return Cash.CashPaid - Cash.TotalBill;

}


int main()
{
   
   
    cout << endl << "the remainder is : " << CalculateReminder(ReadTotall()) ;

    return 0;
    

}

