/**
* Leomart Crisostomo
* ALondra Tlatelpa
* CIS 22A M/W 9:30am
*/
#include <iostream>
using namespace std;
int main()
{
    int countdown = 10;
    cout << "NASA Mission Control readying for liftoff." << endl;
    cout << "Initializing countdown from 10..." << endl;
    while (countdown > 0)
    {
       cout <<  countdown-- << endl;
    }
    cout << "We have liftoff!" ;

}
