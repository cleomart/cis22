//============================================================================
// Name        : Lab3.cpp
// Author      : Leomart Crisostomo
// Date		   : May 12, 2017
// Copyright   : Copyright © 2017 Leomart. All rights resserved.
// Description : This program uses the Coin Class to create a game that tosses three coins (nickel, dime, quarter).
//               If any of the coins landed heads, then the corresponding amount of the coin will be added to total balance.
//               In order to win the game, the player has to have exaclty a total of $1, and game will be over if it exceeded $1.
//               The player will have a choice to continue the game or not before going over a dollar.
//============================================================================
#include <iostream>
#include "Coin.h" //include the class header Coin that simulates the tossing of the coin
#include <iomanip> //setprecision
using namespace std;

int main()
{
    Coin dime; //declare coin dime
    Coin nickel; //declare coin nickel
    Coin quarter; //declare coin quarter
    double total = 0.00; //total balance initialize to 0
    string flag = "yes"; //set the flag to yes for while loop

    //display the instructions of the game
    cout << "************************************Let's Play a Game!*************************************" << endl ;
    cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>Coin Simulator<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << endl;
    cout << "You will toss three coins: a nickel (5 cents), a dime (10 cents), and a quarter (25 cents)."<< endl;
    cout << "If any coin lands heads, you will get the corresponding amount and none if it lands tails.\n" ;
    cout << "To win the game, you need to get a balance of exactly $1. Otherwise, game is OVER!\n" ;
    cout << "You will have a choice to continue tha game or quit before you exceed over a dollar.\n";
    cout << "**************************************So Play Wisely!**************************************" << endl;
    cout << "Let's begin! Shall we? (Enter \"y\" to toss the coins or \"n\" to quit): ";
    cin >> flag;

    while (flag != "y" && flag != "n") //ask the user to enter input until it's valid input
    {
        cout << "Invalid Input!" << endl;
        cout << "Please enter \"y\" to toss the coins or \"n\" to quit ";
        cin >> flag;
    }

    while (flag == "y") //if the user enter "y" begin the tossing of the coin
    {
        dime.toss();
        nickel.toss();
        quarter.toss();

        if (dime.getSideUp() == "heads") //if the dime lands heads, 10 cents will be added to total
        {
            total += 0.10;
        }
        if (nickel.getSideUp() == "heads") //if the nickel lands heads, 5 cents will be added to total
        {
            total += 0.05;
        }
        if (quarter.getSideUp() == "heads") //if the quarter lands heads, 25 cents will be added to total
        {
            total += 0.25;
        }
        if (total > 1.00) //once the total exceeds 1 dollar, prompt  the user that the game is over and  quit the program
        {
            cout << "\nYou exceeded over $1.00" << endl;
            cout << "GAME OVER!\n";
            break;
        }
        if (total == 1.00) //if the total adds up to exactly $1, then the player wins
        {
            cout << "\nCONGRATULATIONS! YOU WIN $1.00!\n";
            break;
        }


        cout << "\nThree coins were tossed!" << endl;
        cout << fixed << setprecision(2) << endl; //set decimal place to 2
        cout << "Nickel: " << nickel.getSideUp() << endl;
        cout << "Dime: " << dime.getSideUp() << endl;
        cout << "Quarter: " << quarter.getSideUp() << endl;
        cout << "Your total is: $"<< total << endl; //display the total balance
        cout << "Do you still want to play? (Enter \"y\" for yes, and \"n\" for no):"; //prompt the user if he still wants to play the game or not
        cin >> flag;

        while (flag != "y" && flag != "n") //asks the user for input until it's valid
        {
            cout << "Invalid Input!" << endl;
            cout << "Please enter \"y\" to toss the coins or \"n\" to quit ";
            cin >> flag;
        }

    }

    if (flag == "n") //quit the program if input is "n"
    {
        cout << "\nThank You For Playing!" << endl;
        cout << "You are going home with $" << total << endl;
    }
}
