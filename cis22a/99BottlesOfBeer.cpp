/**
* Leomart Crisostomo
* CIS 22A M/W 9:30am
*/
#include <iostream>
using namespace std;
int main()
{
    int bottles;
    cout << "Welcome! Let's sing the \"99 Bottles of Beer\" song!" << endl;
    cout << "Enter the number of bottles: " ;
    cin >> bottles;
    cout << endl;
    while (bottles > 0)
    {
        if (bottles > 2)
        {
            cout << bottles << " bottles of beer on the wall!" << endl;
            cout << bottles << " bottles of beer!" << endl;
            cout << "You take one down, pass it around." << endl;
            bottles--;
            cout << bottles << " bottles of beer on the wall.\n" << endl ;
        }
        else if (bottles == 2)
        {
            cout << bottles << " bottles of beer on the wall!" << endl;
            cout << bottles << " bottles of beer!" << endl;
            cout << "You take one down, pass it around." << endl;
            bottles--;
            cout << bottles << " bottle of beer on the wall.\n" << endl;
        }
        else
        {
            cout << bottles << " bottle of beer on the wall!" << endl;
            cout << bottles << " bottle of beer!" << endl;
            cout << "You take one down, pass it around." << endl;
            cout << "No more bottles of beer on the wall." << endl;
            bottles--;

        }
    }
}
