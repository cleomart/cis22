/**
*Alondra Tlatelpa & Leomart Crisostomo
*CIS 22A M/W 9:30 am
*/

#include <iostream>
#include <iomanip>
using namespace std;

double weeklySalary (int a, int b)
{
    double weekly = a* b;

    return weekly;
}

double monthlySalary (int a, int b)
{
    double monthly = a * b * 4;

    return monthly;
}

double yearlySalary(int a, int b)
{
    double yearly = a * b * 50;

    return yearly;
}


int main()
{

    int hours;
    double hourly_wage;
    double weekly_salary = 0;
    double monthly_salary = 0;
    double yearly_salary = 0;

    cout << "This program will calculate your weekly, monthly and yearly salary!\n";
    cout << "Please enter your hourly wage: ";
    cin >> hourly_wage;

    cout << "Please enter the number of hours you work each week: ";
    cin >> hours;

    weekly_salary = weeklySalary(hours, hourly_wage);
    monthly_salary = monthlySalary(hours,hourly_wage);
    yearly_salary = yearlySalary(hours, hourly_wage);

    cout << fixed << setprecision(2);

    cout << "You make $" << weekly_salary << " per week.\n";
    cout << "You make $" << monthly_salary << " per month.\n";
    cout << "You make $" << yearly_salary << " per year.\n";

}
