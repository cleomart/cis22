/**
* Leomart Crisostomo
* CIS 22A M/W 9:30am
*/
#include <iostream>
using namespace std;
int main()
{
    int fib1 = 0;
    int fib2 = 1;
    cout << "The 14 Fibonacci numbers are:" << endl;
    for (int number = 1; number <= 7; number++)
    {
        cout << fib1 << " " << fib2 << " " ;
        fib1 = fib1 + fib2;
        fib2 = fib1 + fib2;
    }

}
