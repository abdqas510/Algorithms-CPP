// P2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string> 
using namespace std;
string ReadName() {

    string name;
    cout << "Enter your name : " << endl;
    cin.ignore(1, '\n');
    getline(cin, name);
    return name;



}

void PrintName(string name) {
    cout << "\n your name is : " << name << endl;

}



int main()
{
    PrintName(ReadName());

    return 0;
    
}
