/**
* Leoamrt Crisostomo
* CIS 22A M/W 9:30am
*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double bmi;
    double weight;
    double height;
    cout << "Welcome! Let's calculate your Body Mass Index." << endl;
    cout << "Please enter your weight in pounds: " ;
    cin >> weight;
    cout << "Please enter your height in inches: ";
    cin >> height;
    bmi = (weight * 703) / pow(height,2);
    cout << "Your BMI is: " << bmi ;
}
