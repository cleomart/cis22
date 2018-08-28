//
//  Account.cpp
//  Account
//
//  Created by Leomart Crisostomo on 6/11/17.
//  Copyright © 2017 Leomart Crisostomo. All rights reserved.
//

#include "Account.h"
#include <iostream>

//Constructor()
//sets everything to 0
//annual interest rate 5% is the given

Account::Account()
{
    balance = 0.00;
    deposits = 0;
    withdrawals = 0;
    interestRate = 0.05;
    serviceCharges = 0.00;
}

//Constructor (a,b)
//allows user to create an acc with specified balance and interest

Account :: Account(double bal, double interest)
{
    balance = bal;
    deposits = 0;
    withdrawals = 0;
    interestRate = interest;
    serviceCharges = 0.00;
}

//calcInt()
//calculates monthly interest and adds to balance
//montly interest is (annual interests)/12

void Account :: calcInt()
{
    balance += (interestRate/12) * balance;
}

//deposit(double)
//adds specified amount to the balance
//increment deposits count

void Account :: deposit(double amount)
{
    balance += amount;
    deposits++;
}

//withdraw(double)
//subtracts the specified amount from balance
//increments withdrawal counts

void Account :: withdraw(double amount)
{
    balance -= amount;
    withdrawals++;
}

//monthlyProc()
//calculates interst and add it to the balance
//takes away any service charges
//resets everything to 0
//print monthly statement before setting everything to 0

void Account :: monthlyProc()
{
    balance -= serviceCharges;
    calcInt();
    printStatement();
    withdrawals = 0;
    deposits = 0;
    serviceCharges = 0;
    
}

//getWithdrawals()
//retrieve withdrawal informations
int Account :: getWithdrawals()
{
    return withdrawals;
}

//getDeposits()
//retrieve deposit informations
int Account :: getDeposits()
{
    return deposits;
}

//getBalance()
//retrieve balance informations
double Account :: getBalance()
{
    return balance;
}

//prints the statement of the account
//prints the balance , number of deposits, and number of withdrawals
void Account::printStatement()
{
    std::cout << "Balance: $" << getBalance() << std::endl;
    std::cout << "Number of Deposits: " << getDeposits() << std::endl;
    std::cout << "Number of Withdrawals: " << getWithdrawals() << std::endl << std::endl;
}

