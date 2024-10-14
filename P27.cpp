#include <iostream>
using namespace std;

int ReadNumber() {
    int num;
    cout << "Enter the number: ";
    cin >> num;
    return num;

}
void LoopFor(int num) {
    int counter = num;
    for (int i = num; counter !=1 ; i--) {
        counter = counter - 1;
        cout << "the numbers is : " << counter << endl;

    }
}

void LoopWhile(int num) {
    cout << "using While loop:\n";
    int counter = num;
    int i = num;
    while (counter !=1) {
        counter -= 1;
        cout << "the numbers is : " << counter << endl;
        i -= 1;

    }
}


int main()
{
    int num = ReadNumber();
    
    LoopFor(num);
    
    LoopWhile(num);

    return 0;

}

