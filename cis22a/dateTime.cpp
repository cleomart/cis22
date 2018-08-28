/**
* Leomart Crisostomo
* CIS 22A 9:30am
*/
#include <iostream>
using namespace std;

//write function prototypes and comments here

void formatDateAmerican(int year, int month, int day);
//prints the date in american format: m/d/yyyy

void formatDateEuropean(int year, int month, int day);
//prints the date in European format: m.d.yyyy

void formatTimeAmerican(int hour, int minutes, string am_or_pm);
//prints the time using the format: H:MMam or H:MMpm

void formatTimeEuropean(int hour, int minutes, string am_or_pm);
// prints the time using the 24 hour clock format

int main()
{
    int year;
    int day;
    int month;
    int hour;
    int minutes;
    string dayEve;
     cout << "Welcome! This program will print dates and times in both the American and European styles!\n\n";

    cout <<"First, let's print a formatted date.\n\n";

    cout << "Please enter the current year: ";
    cin >> year;
    cout << "Please enter the current month: ";
    cin >> month;
    cout << "Please enter the current day: ";
    cin >> day;
    cout << endl;

    //call to the formatDateAmerican function here
    //call to the formatDateEuropean function here
    formatDateAmerican(year, day, month);
    formatDateEuropean(year, day, month);

    cout << "\nNow, let's print a formatted time.\n\n";

    cout << "Please enter the current hour: ";
    cin >> hour;
    cout << "Please enter the current minutes: ";
    cin >> minutes;
    cout << "Please enter whether it is \"morning\" or \"evening\": ";
    cin >> dayEve;
    cout << endl;

    //call to the formatTimeAmerican function here
    formatTimeAmerican(hour, minutes, dayEve);
    //call to the formatTimeEuropean function here
    formatTimeEuropean(hour, minutes, dayEve);


    cout << "\nBye! See you another day!" << endl;

    return 0;
}

//write functions here
void formatDateAmerican(int year, int month, int day)
{
    cout << "Today's date in the U.S.: " << month << "/" << day << "/" << year << endl;
}

void formatDateEuropean(int year, int month , int day)
{
    cout << "Today's date in Europe: " << day << "." << month << "." << year << endl;
}

void formatTimeAmerican(int hour, int minutes, string am_or_pm)
{
    if(am_or_pm == "morning")
    {
    cout << "The current time written in American style: " << hour << ":" << minutes << "am" << endl;
    }
    else
    {
        cout << "The current time written in American style: " << hour << ":" << minutes << "pm" << endl;
    }
}

void formatTimeEuropean(int hour, int minutes, string am_or_pm)
{
    if (am_or_pm == "evening")
    {
        hour +=12;
        cout << "The current time according to the 24 hour clock: " << hour << ":" << minutes << endl;
    }
    else
    {
    cout << "The current Time according to the 24 hour clock: " << hour << ":" << minutes << endl;
    }
}
