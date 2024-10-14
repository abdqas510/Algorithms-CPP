// P24.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

short ReadAge() {
    short Age;

    cout << "Please Enter your Age: " << endl;
    cin >> Age;

    return Age;

}

bool IsValid(int Age, int From, int To) {

    return (Age >= From && Age <= To);

}

void PrintResult() {

    if (IsValid(ReadAge(), 18, 45)) {
        cout << "Valid Age";
    }
    else {
        cout << "Invalid Age";
    }
}
int main()
{

    PrintResult();   

    return 0;
}
