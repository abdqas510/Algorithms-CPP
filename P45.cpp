// P45.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

enum enMonths{ January = 1,Febuary = 2,March = 3, April = 4, May = 5, 
               June = 6 , July = 7, Augast = 8, September = 9, 
               Octobar = 10, November = 11, December = 12 };

int ReadNumberOfWeek(string msg) {

    int num = 0;
    do {
        cout << msg;
        cin >> num;
    } while (num < 1 || num > 12);
    return num;
}

enMonths ReadMonths() {

    return (enMonths)ReadNumberOfWeek("Enter the number of Month: ");
}

string PrintMonthName(enMonths Month) {

    switch (Month) {
    case enMonths::January:
       return "January";
        
    case enMonths::Febuary:
        return "Febuary ";
        
    case enMonths::March :
        return "March";
        
    case enMonths::April:
        return "April";
       
    case enMonths::May:
        return "May";
        
    case enMonths::June:
        return "June";
       
    case enMonths::July:
        return "July";
       
    case enMonths::Augast:
        return "Augast";
       
    case enMonths::September:
       return "September";
        break;
    case enMonths::Octobar:
        return  "Octobar";
       
    case enMonths::November:
        return  "November";
       
    case enMonths::December:
        return "December";
       
    default:
       return "Wrong Month ";

    }

}
int main()
{
    
  cout <<   PrintMonthName(ReadMonths());
   



    /*if (M >= 1 && M <= 12) {
        if (M == 1) {
            cout << "January";
        }
        else if (M == 2) {
            cout << "Febuary ";
        }
        else if (M == 3) {
            cout << "March";
        }
        else if (M == 4) {
            cout << "April";
        }
        else if (M == 5) {
            cout << "May";
        }
        else if (M == 6) {
            cout << "June";
        }
        else if (M == 7) {
            cout << "July";
        }
        else if (M == 8) {
            cout << "Augast";
        }
        else if (M == 9) {
            cout << "September";
        }
        else if (M == 10) {
            cout << "Octopar";
        }
        else if (M == 11) {
            cout << "November";
        }
        else  {
            cout << "December";
        }
    }
    else {
        cout << "Wrong Month ";
    }*/


    return 0;




}


