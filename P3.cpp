// P3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

enum enNumberType { odd = 1, even = 2 };

int ReadNumber() {
    int num;
    cout << "Enter the number: \n";
    cin >> num;
    return num;
}

enNumberType CheckNumberType(int num) {
    if (num % 2 == 0) {
        return enNumberType::even;
    }
    else {
        return enNumberType::odd;
    }
}

void PrintResult(enNumberType Result) {
    if (Result == enNumberType::even) {
        cout << "the number is even\n";
    }
    else {
        cout << "the number is odd\n";
    }
}

int main()
{
    PrintResult(CheckNumberType(ReadNumber()));
}

