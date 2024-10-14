// P15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void ReadNumbers(int& num1, int& num2) {

    cout << "Enter first number:\n";
    cin >> num1;
    cout << "Enter second number:\n";
    cin >> num2;

}

int AreaFunction (int num1, int num2) {

    return num1 * num2;

}

void PrintResult(int Area) {

    cout << endl << "Area = " << Area;

}
int main()
{ // Area of rectangle 
    int num1, num2;
    ReadNumbers(num1, num2);
    PrintResult(AreaFunction(num1, num2));
        
   

    return 0;
}

