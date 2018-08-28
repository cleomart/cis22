/**
* Leomart Crisostomo
* CIS 22A M/W 9:30am
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
    char c;
    string s;
    cout<< "Input a number:";
    c = cin.get();

    cout << "Enter name:";
    cin >> s;
    cout << s+c;
}
