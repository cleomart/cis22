//
//  Checking.h
//  Account
//
//  Created by Leomart Crisostomo on 6/11/17.
//  Copyright © 2017 Leomart Crisostomo. All rights reserved.
//

#ifndef Checking_h
#define Checking_h
#include "Account.h"

class Checking : public Account
{
public:
    Checking() : Account (){}
    Checking (double bal) : Account (bal, 0){}
    void withdraw (double);
    void deposit (double);
    void monthlyProc();

};

#endif /* Checking_h */
