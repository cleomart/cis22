/**
* Leomart Crisostomo
* CIS 22A M/W 9:30am
*/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    cout << "i" << "\tj" << endl;
    for (double i = -5; i <= 5; i += .5)
    {
        double j = pow(i,3);
        cout << fixed << setprecision(1) ;
        cout << i << "\t" << j << endl;
    }
}
