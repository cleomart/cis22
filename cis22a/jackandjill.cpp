/**
* Leomart Crisostomo
* CIS 22A M/W 9:30am
*/
#include <iostream>
using namespace std;
int main ()
{
    int number = 1;
    while (number <= 150)
    {
        cout << number++ << endl;
        if (number % 5 == 0 && number % 7 == 0)
        {
            cout << "Went Up The Hill" << endl;
            number++;
        }
        else if (number % 5 == 0)
        {
            cout << "Jack" << endl;
            number++;
        }
        else if (number % 7 == 0)
        {
            cout << "Jill" << endl;
            number++;
        }
    }
}
