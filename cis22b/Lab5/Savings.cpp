//
//  Savings.cpp
//  Account
//
//  Created by Leomart Crisostomo on 6/11/17.
//  Copyright © 2017 Leomart Crisostomo. All rights reserved.
//

#include "Savings.h"
#include <iostream>

//withdraw(double)
//check if balance < 25 before withdrawal
//check if the status is inactive
//if the account is active, withdraw is made

void Savings :: withdraw (double amount)
{
    //check if status is active
    if(balance < 25)
        status = false;
    else
        status = true;
    
    if (status) //if account is active, withdraw.
    {
        Account :: withdraw(amount);
    }
}

//deposit (double)
//check account status (active/inactive)
//check new balance with new amount included will make the account active again

void Savings :: deposit(double amount)
{
    
    if (!status && (balance + amount) >= 25)
    {
        status = true;
    }
    
    //deposit the amount
    Account :: deposit(amount);
}

//monthlyProc()
//after 4 withdrawals, $1/withdrawal added to monthly charge

void Savings :: monthlyProc()
{
    if (withdrawals > 4)
        serviceCharges += withdrawals;
    
    
    //call monthlyProc of the base class
    std::cout << "\n**********Savings Statement********** \n";
    Account :: monthlyProc();

    
    //change status if it's inactive now
    status = (balance >= 25);
}

