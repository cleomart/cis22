//
//  Account.h
//  Account
//
//  Created by Leomart Crisostomo on 6/11/17.
//  Copyright © 2017 Leomart Crisostomo. All rights reserved.
//

#ifndef Account_h
#define Account_h

class Account
{
protected:
    double balance;
    int deposits;
    int withdrawals;
    double interestRate;
    double serviceCharges;
    
public:
    Account();
    Account(double, double);
    virtual void deposit(double);
    virtual void withdraw(double);
    virtual void monthlyProc();
    virtual void calcInt();
    void printStatement();
    int getWithdrawals();
    int getDeposits();
    double getBalance();
};
#endif /* Account_h */
