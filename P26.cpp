// P26.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int ReadNumber() {
    int num;
    cout << "Enter the number: ";
    cin >> num;
    return num;

}
void LoopFor(int num) {
    int counter = 0;
    for (int i = 0; counter < num; i++) {
        counter = counter + 1;
        cout << "the numbers is : " << counter << endl;

    }
}

void LoopWhile(int num) {
    cout << "using While loop:\n";
    int counter = 0;
    int i = 0;
    while (counter < num) {
        counter += 1;
        cout << "the numbers is : " << counter << endl;
        i += 1;

    }
}
int main()
{
    int num = ReadNumber();
    

   LoopFor(num);
  
   LoopWhile(num);

   return 0;
}

