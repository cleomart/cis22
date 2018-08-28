//============================================================================
// Name        : Coin.h
// Author      : Leomart Crisostomo
// Date        : April, 28, 2017
// Copyright   : Copyright © 2017 Leomart. All rights resserved.
// Description : This is a header of a class named Coin, which simulates the tossing of a coin
//               and determines the side of the coin facing up ("heads" or "tails").
//============================================================================

#ifndef COIN_H
#define COIN_H
#include <ctime> //time
#include <cstdlib> //for srand function

class Coin
{
    private:
    std::string sideUp;

    public:


        Coin() //default construtctor
        {
            srand(time(0)); //This generates a random number and will be used to determine the side of the coin.
            toss();
        }

        /**
        * This mutator function will simulate the tossing of the coin.
        * If the random number generated is even, it will set the variable sideUp as heads,
        * and if the random number is odd, the sideUp will be tails.**/

        void toss()
        {
            if (rand() % 2 == 0)
            {
                sideUp = "heads";
            }
            else
            {
                sideUp = "tails";
            }
        }

        std::string getSideUp() const //accessor: returns the value of sideUp
        {
            return sideUp;
        }
        virtual ~Coin() {};

};
#endif // COIN_H
