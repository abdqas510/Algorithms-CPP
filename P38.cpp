// P38.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

enum enIsPrime {Prime = 1, notPrime = 2};

enIsPrime IsPrime(int num) {

    int M = round(sqrt(num));

    for (int i = 2; i <= M; i++) {    // sqrt(num) is a short mathmetical way to run the program faster
        if (num % i == 0) {
            return enIsPrime::notPrime;
        }
        
    }
    return enIsPrime::Prime;
}



int ReadNumberPositive() {

    int num;
    do {
    cout << "Enter the number: ";
    cin >> num;

    } while (num < 0);
    return num;

}

void PrintResult(int num) {

    if (IsPrime(num) == enIsPrime::Prime) {

        cout << "the number is prime";

    }
    else {

        cout << "the number is not prime";
    }
}

int main()
{
    PrintResult(ReadNumberPositive());

    return 0;
}
