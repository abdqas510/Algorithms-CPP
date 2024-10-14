// P23.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

void ReadData(short& a, short& b, short& c) {

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;


}
float Area(short a, short b, short c) {
    float area;
    float p, equ;
    const float pi = 3.141592653589793238462643383279502884197;
    p = (a + b + c) / 2;
    equ = ((a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c))));
    area = pi * pow(equ, 2);
    return area;

}

void PrintResult(float Area) {

    cout << "the area is : " << Area << endl;

}

int main()
{

    short a, b, c;  
    
    ReadData(a, b, c);

    PrintResult(Area(a, b, c));

   

    return 0;






}

