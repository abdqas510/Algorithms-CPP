// P8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
enum enPassFail {fail,pass};
int ReadMark() {

    int Mark;
    cout << "what's your Mark?" << endl;
    cin >> Mark;
    return Mark;
    
}

enPassFail PassOrFail(int Mark) {

    if (Mark >= 50) {
       return enPassFail::pass;
    }
    else {
       return enPassFail::fail;
    }

}

void PrintResult(int Mark) {
    if (PassOrFail(Mark) == enPassFail::pass) {
        cout << "Pass";
    }
    else {
        cout << "Fail";
    }
}

int main()
{
    PrintResult(ReadMark());

    return 0;
}

