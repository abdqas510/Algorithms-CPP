#include <iostream>
using namespace std;
enum enCheckOddOrEven { odd, even };

enCheckOddOrEven CheckOddorEven(int num) {
    if (num % 2 == 0) {
        return enCheckOddOrEven::even;
    }
    else {
        return enCheckOddOrEven::odd;
    }
}
int ReadNumber() {
    int num;
    cout << "Enter the number: ";
    cin >> num;
    return num;

}
int SumOfOdd(int num) {
    int sum = 0;
    for (int i = 1; i <= num; i++) {
        if (CheckOddorEven(i) == enCheckOddOrEven::even) {
            sum = sum + i;

        }
    }
    return sum;
}

int SumOfOddWhile(int num) {
    int sum = 0;
    int counter = 0;
    while (counter < num) {
        counter++;
        if (CheckOddorEven(counter) == enCheckOddOrEven::even) {

            sum += counter;
        }

    }
    return sum;
}
int main()
{
    int num = ReadNumber();
    cout << "the sum of odd numbers is : " << SumOfOdd(num) << endl;
    cout << "using While loop:\n";
    cout << "the sum of odd numbers is : " << SumOfOddWhile(num) << endl;


    return 0;
}
