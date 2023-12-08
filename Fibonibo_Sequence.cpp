#include <iostream>

using namespace std;

int Fib(int n)//base case and recursive case (induction) memoization :OOOOO
    {
        if(n==0 || n==1)
        return 1;
    else  
    return Fib(n-1) + Fib(n-2);
    //return Fib(n-1)+2*Fib(n-2)+Fib(n-3);  
    }

int main()
{
    int n = 4;

    cout<< Fib(n);

}