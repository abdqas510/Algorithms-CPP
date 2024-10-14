// P4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
struct stInfo {
    short Age;
    bool HasLicence;
};

stInfo ReadInfo() {
    stInfo Info;
    cout << "Enter your age? " << endl;
    cin >> Info.Age;
    cout << "Do you have a licence ?" << endl;
    cin >> Info.HasLicence;

    return Info;

}

bool IsAccepted(stInfo Info) {
    return (Info.Age > 21 && Info.HasLicence);
}

void PrintResult(stInfo Info) {
    if (IsAccepted(Info)) {
        cout << "\n Hired" << endl;

    }
    else {
        cout << "\n Rejected" << endl;

    }
}


int main()
{
    PrintResult(ReadInfo());

    return 0;

    
}

