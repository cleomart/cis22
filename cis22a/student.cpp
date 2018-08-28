/**
* Leomart Crisostomo
* CIS 22A M/W 9:30am
*/
#include <iostream>
using namespace std;
int main()
{
    char firstLetter;
    int student_id;
    double deAnzaYears;
    cout << "Collecting Student Data!\n\n";
    cout << "Please enter the first letter of your last name: ";
    cin >> firstLetter;
    cout << "Please enter your student ID number: " ;
    cin >> student_id;
    cout << "Please enter the number of years you have attended Da Anza: " ;
    cin >> deAnzaYears;
    cout << endl;
    cout << firstLetter << " is the first initial of your last name." << endl;
    cout << "Your student ID number is " << student_id << "." << endl;
    cout << "You have attended De Anza for " << deAnzaYears << " years." << endl;



}
