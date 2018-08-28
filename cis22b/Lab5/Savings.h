//
//  Savings.h
//  Account
//
//  Created by Leomart Crisostomo on 6/11/17.
//  Copyright © 2017 Leomart Crisostomo. All rights reserved.
//

#ifndef Savings_h
#define Savings_h
#include "Account.h"

class Savings : public Account
{
protected:
    bool status; //holds the status of the account: true/active or false/inactive
    
public:
    //inline constructor
    Savings() : Account()
    {
        //set status to false
        //balance starts from 0.00
        status = false;
    }
    
    Savings(double bal, double interest) : Account(bal, interest){}
    
    void withdraw(double amount);
    void deposit(double amount);
    void monthlyProc();
};
#endif /* Savings_h */
