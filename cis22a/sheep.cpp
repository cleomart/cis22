/**
* Alondra Tlatelpa & Leomart Crisostomo
* CIS 22A M/W 9:30 am
*/

#include <iostream>

using namespace std;

int main()
{
    cout<< "I will help you fall asleep!\n";

    int numSheep=1;

    int targetSheep;

    cout<< "Enter the number of sheep you wish to count: ";

    cin>>targetSheep;

    for (int numSheep = 1; numSheep<= targetSheep ; numSheep++)
        {
            cout<< numSheep<< " sheep "<<endl;
        }

        cout<< "\nYou counted "<<targetSheep<<" sheep." <<endl;

        cout<< "ZZZZZZZZZZZZZZZZZZZZZZZ\n";

}
