// P16.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;
void ReadNumbers(float& num1, float& num2) {

    cout << "Enter Rectangular Side A :\n";
    cin >> num1;
    cout << "Enter Rectangular diagonal D: \n";
    cin >> num2;

}

float  RectangularAreaBYSideAndDiagonal(float num1, float num2) {

    float Area = num1 * sqrt(pow(num2, 2) - pow(num1, 2));

    return Area;

}

void PrintResult(int Area) {

    cout << endl << "Area = " << Area;

}
int main()
{ // num1 = a, num2 = d 
    float num1, num2;
    ReadNumbers(num1, num2);
    PrintResult(RectangularAreaBYSideAndDiagonal(num1, num2));



    return 0;
}
