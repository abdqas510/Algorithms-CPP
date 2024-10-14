// P46.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
// needs the char to be an "uppercase" to calculat 
char ReadLetter(string msg) {
    char Letter;
    do {
    
    cout << msg;
    cin >> Letter;
    
    
    
    
    } while (Letter < 65);

    return Letter;

}
void AtoZ(char letter) {
    for (letter; letter <= 90; letter++) {
        cout << "letter is : " << letter << endl;
    }
    cout << endl;
}

void WhileAtoZ(char letter) {
    while (letter <= 90) {

        cout << "letter is : " << letter << endl;
        letter += 1;

    }
}
int main()
{
    char letter = ReadLetter("Enter the letter: ");
  
    AtoZ(letter);

    cout << "using While loop: \n" << endl;

    WhileAtoZ(letter);


    return 0;
}

