// P40.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
float ReadPositive(string msg) {
    float BillValue;
    do {
    cout << msg ;

    cin >> BillValue;

    } while (BillValue < 0);

    return BillValue;

}

float TotallBillCalculated(float BillValue) {
    float  TotalBill = BillValue * 1.1 * 1.16;

    return TotalBill;
}
int main()
{
    // Service Fee and Sales Tax 10%, 16%

    float BillValue;

    BillValue = ReadPositive("Enter the BillValue : \n");
    
   
   
    cout << endl << "Total Bill = " << TotallBillCalculated(BillValue);

    return 0;

}

