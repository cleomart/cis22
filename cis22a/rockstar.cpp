/**
* Leomart Crisostomo
* CIS 22A M/W 9:30am
*/
#include <iostream>
using namespace std;
int main ()
{
    string firstName;
    string favoriteColor;
    string birth_stone;
    cout << "Welcome! This program will tell you your \"Rock\" Star Name\n" ;
    cout << "Please enter yout first name:" ;
    cin >> firstName;
    cout << "Please enter your favorite color: " ;
    cin >> favoriteColor;
    cout << "Please enter your birthstone: " ;
    cin >> birth_stone;
    cout << "Your \"Rock\" Star Name is " << firstName << " the " << favoriteColor << " " << birth_stone ;
}
