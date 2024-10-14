// P32.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;
//short RoundedPower(short num, short M) {
//    return round(pow(num, M));
int ReadNumber() {
    int num;
    cout << "Enter the number : ";
    cin >> num;
    return num;

}

int ReadPower() {
    int M;
    cout << "Enter the power : ";
    cin >> M;
    return M;

}
int RoundedPower(int num, int M){
    int power = 1;
    if (M == 0) {

        return 1;
    }
    else {

    for ( M; M > 0; M--) {
        power = num * power;
        
    }

    }
    return power;
}
int RoundedPowerWhile(int num, int M) {
    int power = 1;
   while ( M > 0) {
        power = num * power;
        M -= 1;

    }
    return power;
}

int main()
{ // power of M
    int num, M;
    num = ReadNumber();
    M = ReadPower();
    cout << endl;
    cout << "answer: " << RoundedPower(num, M) << endl;
    cout << "using while loop:\n";
    cout << "answer: " << RoundedPowerWhile(num, M) << endl;



    return 0;


}
