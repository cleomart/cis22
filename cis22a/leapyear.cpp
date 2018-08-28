/**
* Leomart Crisostomo
* CIS 22A M/W 9:30am
*/
#include <iostream>
using namespace std;
int main()
{
    int year;
    int remainder;
    cout << "Welcome! Enter a year and I will tell you whether it is a Leap Year!\n" << endl;
    cout << "Please enter the year: ";
    cin >> year;
    remainder = year % 4;
    if (remainder == 0) {
        cout << year << " is a Leap Year!";
    }
    if (remainder != 0) {
        cout << year << " is not a Leap Year!";
    }
}
