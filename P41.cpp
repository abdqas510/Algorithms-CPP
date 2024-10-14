// P41.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int ReadPositiveNumber(string msg) {
    int num;
    do {

    cout << msg ;
    cin >> num;

    } while (num <= 0);
    return num;


}
float HoursToDays(int Hours) {
    float Days = 0;
    Days = float(Hours) / 24;
    return Days;


}
float DaysToWeeks(int Days) {
    float Weeks = 0;
    Weeks = float(Days) / 7;
    return Weeks;
}

void PrintResult(int Hours) {

    cout << "***********************************\n";
    float Days = HoursToDays(Hours);
    cout << "the number of Days is: " << Days << endl;
    cout << "the number of Weeks is: " << DaysToWeeks(Days);

}
int main()
{

    PrintResult(ReadPositiveNumber("How many Hours : "));


    return 0;
    
}

