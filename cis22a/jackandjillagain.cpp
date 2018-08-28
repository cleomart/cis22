/**
* Leomart Crisostomo
* CIS 22A M/W 9:30am
*/
#include <iostream>
using namespace std;
int main()
{
    for (int number = 1; number <= 150; number++)
    {
        if (number % 5 == 0 && number % 7 == 0)
        {
            cout << "Went Up The Hill" << endl;
        }
        else if (number % 5 == 0)
        {
            cout << "Jack" << endl;
        }
        else if (number % 7 == 0)
        {
            cout << "Jill" << endl;
        }
        else
        {
            cout <<  number << endl;
        }
    }
}
