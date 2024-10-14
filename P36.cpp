// P36.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
enum enOperators { add = '+', sub = '-', multi = '*', divide = '/' };
enOperators ReadOp() {
    char op = '+';
    cout << "What's the operation you want to make [*,/,-,+]: ";
    cin >> op;

    return (enOperators) op;
}
float ReadNumber(string msg) {
    float num = 0;
    cout << msg << endl;
    cin >> num;
    return num;
}
float CalculateResult(float num1, float num2, enOperators Op) {

    switch (Op) {
    case enOperators::multi :
        return num1 * num2;
        break;
    case enOperators::divide :
        return num1 / num2;
        break;
    case enOperators::add:
        return num1 + num2;
        break;
    case enOperators::sub:
        return num1 - num2;
        break;
    default:
        return num1 + num2;

    }

}

int main()
{
    float num1, num2;
    num1 = ReadNumber("Enter the first number: ");
    num2 = ReadNumber("Enter the second number: ");

    enOperators Op = ReadOp();
    cout << endl << "The Result is : "  << CalculateResult(num1, num2, Op);
   
    

    return 0;

    
}


