// P21.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// P20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
using namespace std;


float ReadCircomference() {
    float Circomference;
    cout << "Enter  Circomference : ";
    cin >> Circomference;
    return Circomference;
}


float CircleArea(float Circomference) {
    float area;
    const float PI = 3.14;
    area = pow(Circomference,2) / (4 * PI);
    return area;
}


void PrintCircleArea(float Area) {

    cout << "the circle area : " << Area << endl;

}
int main()
{ //  the circle area

    PrintCircleArea(CircleArea(ReadCircomference()));



    return 0;




}



















