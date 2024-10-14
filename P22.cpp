// P22.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void ReadIsoData(short &num1, short &num2) {

    
    cout << "Enter a :\n";
    cin >> num1;
    cout << "Enter b :\n";
    cin >> num2;


}
float Area(short num1, short num2) {
    float area;
    const float PI = 3.14;
    area = PI * ((num2 * num2) / 4) * ((2 * num1) - num2) / ((2 * num1) + num2);
    return area;

}

void PrintResult(float Area) {

    cout << endl << "Area = " << Area << endl;

}
int main()
{ // floor Circle Area Inscribed in an Isosceles Triangle
     short num1, num2;

     ReadIsoData(num1, num2);

     PrintResult(Area(num1, num2));
    
    

    return 0;
}

