// P7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
int ReadNumber() {
    int num;
    cout << "Enter the number \n";
    cin >> num;
    return num;
}
float CalculateHalfNumber(int num) {

    return float(num) / 2;
}

void PrintRseult(int num) {
    string Result;
    Result = "Half of " + to_string(num) + " is " + to_string(CalculateHalfNumber(num));
    cout << endl << Result;

}
int main()
{
   
    PrintRseult(ReadNumber());


    return 0;



}


