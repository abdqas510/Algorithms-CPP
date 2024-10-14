// P43.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int ReadPositiveNumber(string msg) {
    int num;
    do {
        cout << msg;
        cin >> num;
    } while (num < 0);
    return num;
}

void Function(int TotalSeconds) {
    int days, hours, minutes, seconds,Reminder;
    const int SecondsPerDay = 24 * 60 * 60;
    const int SecondsPerhour = 60 * 60;
    const int SecondsPerminute = 60;
    days = floor(TotalSeconds / SecondsPerDay);
    Reminder = TotalSeconds % SecondsPerDay;
    hours = floor(Reminder / SecondsPerhour);
    Reminder = Reminder % SecondsPerhour;
    minutes = floor(Reminder / SecondsPerminute);
    Reminder = Reminder % SecondsPerminute;
    seconds = Reminder;
    cout << endl << round(days) << ':' << round(hours) << ':' << round(minutes) << ':' << round(seconds);

}
int main()
{ // Seconds to Days Hours Minutes Seconds
    int TotalSeconds;

    TotalSeconds = ReadPositiveNumber("Enter the number of Seconds: ");

    Function(TotalSeconds);


    return 0;

}


