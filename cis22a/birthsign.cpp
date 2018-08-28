/**
* Leomart Crisostomo
* CIS 22A M/W 9:30am
*/
#include <iostream>
using namespace std;
int main()
{
    string repeat = "y";
    int month;
    int day;
    while ("y" == repeat)
    {
        cout << "What's your sign?" << endl;
        cout << "Please enter the month of your birth (1-12): " ;
        cin >> month;
        cout << "Please enter the day of your birth (1-31): " ;
        cin >> day;
        if ((month == 3 && day >= 21 && day <= 31) || (month == 4 && day >=1 && day <= 19))
        {
            cout << "Your sign is Aries." << endl;
        }
        else if ((month == 4 && day >= 20 && day <= 30) || (month == 5 && day >= 1 && day <= 20))
        {
            cout << "Your sign is Taurus." << endl;
        }
        else if ((month == 5 && day >= 21 && day <=31 ) || (month == 6 && day >= 1 && day <= 21 ))
        {
            cout << "Your sign is Gemini." << endl;
        }
        else if ((month == 6 && day >= 22 && day <= 30) || (month == 7 && day >= 1 && day <= 22))
        {
            cout << "Your sign is Cancer." << endl;
        }
        else if ((month == 7 && day >= 23 && day <= 31) || (month == 8 && day >= 1 && day <= 22 ))
        {
            cout << "Your sign is Leo." << endl;
        }
        else if ((month == 8 && day >= 23 && day <= 31) || (month == 9 && day >= 1 && day <= 22))
        {
            cout << "Your sign is Virgo." << endl;
        }
        else if ((month == 9 && day >= 23 && day <= 30) || (month == 10 && day >= 1 && day <= 22))
        {
            cout << "Your sign is Libra." << endl;
        }
        else if ((month == 10 && day >= 23 && day <= 31) || (month == 11 && day >= 1 && day <= 21))
        {
            cout << "Your sign is Scorpio." << endl;
        }
        else if ((month == 11 && day >= 22 && day <= 30) || (month == 12 && day >= 1 && day <= 21))
        {
            cout << "Your sign is Sagittarius." << endl;
        }
        else if ((month == 12 && day >= 22 && day <= 31) || (month == 1 && day >= 1 && day <= 19))
        {
            cout << "Your sign is Capricorn." << endl;
        }
        else if ((month == 1 && day >= 20 && day <= 31) || (month == 2 && day >=1 && day <= 18))
        {
            cout << "Your sign is Aquarius." << endl;
        }
        else if ((month == 2 && day >= 19 && day <= 29) || (month == 3 && day >= 1 && day <= 20))
        {
            cout << "Your sign is Pisces." << endl;
        }
        cout << "Would you like to run this program again? (y/n): " ;
        cin >> repeat;

    }
}
