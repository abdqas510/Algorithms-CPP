// P20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
using namespace std;


float ReadRectangularArea() {
    float Area;
    cout << "Enter Rectangular Area : ";
    cin >> Area;
    return Area;
}


float CircleArea(float Area) {
    unsigned short area;
    const float PI = 3.14;
    area = (PI * Area * Area) / 4;
    return area;
}


void PrintCircleArea(float Area) {

    cout << "the circle area : " << Area << endl;

}
int main()
{ //  the circle area

    PrintCircleArea(CircleArea(ReadRectangularArea()));



    return 0;




}

