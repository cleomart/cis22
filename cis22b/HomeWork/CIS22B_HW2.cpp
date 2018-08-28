//============================================================================
// Name        : 22B_Lab1.cpp
// Author      : Leomart Crisostomo
// Version     :
// Copyright   : Copyright © 2017 Leomart. All rights resserved.
// Description : Reads a text file containing a set of test scores and calculates the average, median and mode.
//============================================================================

#include <iostream>

using namespace std;

 struct Division
    {
        double firstQuarterSales;
        double secondQuarterSales;
        double thirdQuarterSales;
        double fourthQuarterSales;
        double totalAnnualSales = firstQuarterSales + secondQuarterSales + thirdQuarterSales + fourthQuarterSales;
        double averageQuarterlySales = (firstQuarterSales + secondQuarterSales + thirdQuarterSales + fourthQuarterSales) / 4;
    };


int main()
{

    Division east;
    Division west;
    Division north;
    Division south;

    cout << "Please enter the quarter's sales for the East Division" << endl;
    cout << "First Quarter Sales: " ;
    cin >> east.firstQuarterSales;

    while(east.firstQuarterSales < 0)
    {
        cout << "Invalid Input!: \n" ;
        cout << "Please enter a non-negative value: ";
        cin >> east.firstQuarterSales;

    }

    cout << "Second Qurter Sales: " ;
    cin >> east.secondQuarterSales;

     while(east.secondQuarterSales < 0)
    {
        cout << "Invalid Input!: \n" ;
        cout << "Please enter a non-negative value: ";
        cin >> east.secondQuarterSales;

    }

    cout << "Third Quarter Sales: " ;
    cin >> east.thirdQuarterSales;

     while(east.thirdQuarterSales < 0)
    {
        cout << "Invalid Input!: \n" ;
        cout << "Please enter a non-negative value: ";
        cin >> east.thirdQuarterSales;

    }
    cout << "Fourth Quarter Sales: " ;
    cin >> east.fourthQuarterSales;

    while(east.fourthQuarterSales < 0)
    {
        cout << "Invalid Input!: \n" ;
        cout << "Please enter a non-negative value: ";
        cin >> east.fourthQuarterSales;

    }



    cout << "Total Annual Sales; " << east.totalAnnualSales << endl ;
    cout << "Average Quarterly Sales " << east.averageQuarterlySales<< endl;
    cout << east.firstQuarterSales << endl;
}
