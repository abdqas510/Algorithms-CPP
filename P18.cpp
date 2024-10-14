// P18.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


float ReadRadius() {
    float R;
    cout << "Enter Radius: ";
    cin >> R;
    return R;
}


float CircleArea(float R ) {
    float area;
    float pi = 3.14;
    area = (pi * pow(R, 2));
    return area;
}


void PrintCircleArea(float Area) {

    cout << "the circle area : " << Area << endl;

}
int main()
{ //  the circle area

    PrintCircleArea(CircleArea(ReadRadius()));
   


    return 0;

    


}

