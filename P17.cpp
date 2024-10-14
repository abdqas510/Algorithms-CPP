// P17.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
void ReadNumbers(float& num1, float& num2) {

    cout << "Enter Triangle Base :\n";
    cin >> num1;
    cout << "Enter Triangle Hight: \n";
    cin >> num2;

}

float  TriangleArea(float num1, float num2) {

    float Area = 0.5*num1*num2;

    return Area;

}

void PrintResult(int Area) {

    cout << endl << "Area = " << Area;

}
int main()
{ // num1 = a, num2 = h
    float num1, num2;
    ReadNumbers(num1, num2);
    PrintResult(TriangleArea(num1, num2));



    return 0;
}
