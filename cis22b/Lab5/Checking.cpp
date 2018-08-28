//
//  Checking.cpp
//  Account
//
//  Created by Leomart Crisostomo on 6/11/17.
//  Copyright © 2017 Leomart Crisostomo. All rights reserved.
//

#include "Checking.h"
#include <iostream>


//withdraw(double)
//if the amount withdrew will cause the balance to go < 0, withdrawal will not go thru.
//return -1 if withdrawal failed
//$15 service charge added
//if withdrawal goes thru, withdrawal will be incremented

void Checking :: withdraw (double amount)
{
    double newBal = balance - amount;
    
    //make sure it's a valid withdrawal
    if (newBal < 0)
        balance -= 15;
    else
        Account:: withdraw(amount);
}

//deposit(double)
//calls the base method for deposit
void Checking :: deposit (double amount)
{
    Account :: deposit (amount);
}

//monthlyProc()
//adds an initial $5 charge, then 10c every withdrawal
//call base class function after
//return service charges before it gets reset
void Checking :: monthlyProc()
{
    serviceCharges += 5 + (0.1 * withdrawals);
    
    //call the monthlyProc of the base class
    std::cout << "\n**********Checking Statement********** \n";
    Account::monthlyProc();
}




