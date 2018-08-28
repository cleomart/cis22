/* * test.cpp * * Created on: Feb 21, 2017 * Author: hellenpacheco */
#include <iostream>
#include "Checking.h"
#include "Savings.h"
using namespace std;

int main()
{
    cout << "Creating checking with 100 and savings with 2000...\n";
    Checking checkAcct(100);
    Savings saveAcct(2000, .1);
    cout << "Withdrawing 10 from checking...\n";
    checkAcct.withdraw(10);
    cout << "Withdrawing 10 from checking...\n";
    checkAcct.withdraw(10);
    cout << "Withdrawing 10 from checking...\n";
    checkAcct.withdraw(10);
    cout << "Depositing 20 on Checking...\n";
    checkAcct.deposit(20);
    cout << "Generating monthly proc...\n";
    checkAcct.monthlyProc();
    cout << "Withdrawing 20 from savings...\n";
    saveAcct.withdraw(20);
    cout << "Withdrawing 20 from savings...\n";
    saveAcct.withdraw(20);
    cout << "Withdrawing 20 from savings...\n";
    saveAcct.withdraw(20);
    cout << "Withdrawing 20 from savings...\n";
    saveAcct.withdraw(20);
    cout << "Withdrawing 20 from savings...\n";
    saveAcct.withdraw(20);
    cout << "Depositing 50...\n";
    saveAcct.deposit(50);
    cout << "Generating monthly proc...\n";
    saveAcct.monthlyProc();
    return 0;
}
