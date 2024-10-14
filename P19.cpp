// P19.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


float ReadDiameter() {
    float D;
    cout << "Enter Diameter: ";
    cin >> D;
    return D;
}


float CircleArea(float D) {
    const float PI = 3.14;
    short area;
    area = (pow(D, 2) * PI) / 4;
    return area;
}


void PrintCircleArea(float Area) {

    cout << "the circle area : " << Area << endl;

}
int main()
{ //  the circle area

    PrintCircleArea(CircleArea(ReadDiameter()));



    return 0;




}



