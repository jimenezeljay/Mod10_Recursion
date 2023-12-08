#include <iostream>

using namespace std;

int sum_digits(int number)
{
    if(number == 0) return 0; //base case
    return number % 10 + sum_digits(number / 10);
}

//    sum_digits(237) = 7 + 3 + 2 + 0 =12
//
//     sum_digits(23) = 3 + sum_digits(2)
//
//      sum_digits(2) = 2 + sum_digits(0)//base step
//
// sum_digits(0) = 0




int main()
{
    int number =0;

    cout<< "Enter Number : ";
    cin>> number;

    cout<< "Digits Sum: " << sum_digits(number);
    // 237 -> 2 + 3 + 7 = 12

    // number = 237

    // 237 / 10 = 23 remainder 7
    //  23 / 10 = 2 reamainder 3
    //   2 / 10 = 0 remainder 2


    //237 % 10 = 7
    // 237 / 10 = 23
    //



    return 0;
}