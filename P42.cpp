// P42.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

struct stTimes {
    int days, hours, minutes, seconds;
};

int ReadPoitiveNumber(string msg) {
    int num;
    do {
        cout << msg;
        cin >> num;
    } while (num <= 0);
    return num;
}
stTimes ReadTimes() {

    stTimes Times;

    Times.days =  ReadPoitiveNumber("Enter the number of Days: ");
    Times.hours =  ReadPoitiveNumber("Enter the number of hours: ");
    Times.minutes = ReadPoitiveNumber("Enter the number of minutes: ");
    Times.seconds =  ReadPoitiveNumber("Enter the number of Seconds : ");

    return Times;

}
int DurationInSecond(stTimes Times) {
    int TotalSeconds;
    const int SecondsPerDay = 24 * 60 * 60;
    const int SecondsPerhour = 60 * 60;
    const int SecondsPerminute = 60;
    TotalSeconds = (Times.days * SecondsPerDay) + (Times.hours * SecondsPerhour) + (Times.minutes * SecondsPerminute) + Times.seconds;
    return round(TotalSeconds);


}
int main()
{ // Task Duration in seconds
    stTimes Times;
    
    Times = ReadTimes();

    cout << endl << "the total seconds are = " << DurationInSecond(Times) << " Seconds\n";

    return 0;



}

