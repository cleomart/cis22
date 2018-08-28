/**
* Leomart Crisostomo
* CIS 22A M/W 9:30am
*/
#include <iostream>
using namespace std;
int main()
{
    int base;
    string repeat = "y";
    do {
    cout << "I will print triangles for you!\n";
    cout << "Enter the width of the triangle's base: ";
    cin >> base;
    while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n') ;
        cout << "Please enter a positive whole number." << endl;
        cout << "Enter the width of the triangle's base: " ;
        cin >> base;
    }
    cout << endl;
    for (int row = 1; row <= base; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << "*";
        }
        cout << endl ;
    }
    cout << endl;
    for (int row = base; row >= 1; row--)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Would you like me to print more triangles for you (y/n)? " ;
    cin >> repeat;
    cout << endl;
    }
    while (repeat == "y" || repeat == "Y" || repeat == "Yes" || repeat == "yes") ;
    cout << "Thank you!" << endl;
    cout << "And, remember: programming is easy if you approach it from the right angle." << endl;

    return 0;
}
