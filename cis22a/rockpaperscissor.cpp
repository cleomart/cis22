/**
* Lemart Crisostomo
* CIS 22A M/W 9:30am
*/
#include <iostream>
using namespace std;
int main()
{
    string player1_name;
    string player2_name;
    string player1;
    string player2;
    cout << "Let's play Rock-Paper-Scissors!" << endl;
    cout << "Player one, please enter your name: " ;
    cin >> player1_name;
    cout << "Player two, please enter your name: " ;
    cin >> player2_name;
    cout << player1_name << ", please enter \"Rock\", \"Paper\" or \"Scissors\" : " ;
    cin >> player1;
    cout << player2_name << ", please enter \"Rock\", \"Paper\" or \"Scissors\" : " ;
    cin >> player2;
    if (player1 == "Rock" && player2 == "Scissors")
    {
        cout << "Rock breaks scissors." << endl;
        cout << player1_name << " wins!" ;
    }
    else if (player1 == "Paper" && player2 == "Rock")
    {
        cout << "Paper covers rock." << endl;
        cout << player1_name << " wins!" ;
    }
    else if (player1 == "Scissors" && player2 == "Paper")
    {
        cout << "Scissors cut paper." << endl;
        cout << player1_name << " wins!" ;
    }
    else if (player1 == "Scissors" && player2 == "Rock")
    {
        cout << "Rock breaks scrissors." << endl;
        cout << player2_name << " wins!" ;
    }
    else if (player1 == "Rock" && player2 == "Paper")
    {
        cout << "Paper covers rock." << endl;
        cout << player2_name << " wins!";
    }
    else if (player1 == "Paper" && player2 == "Scissors")
    {
        cout << "Scissors cut paper." << endl;
        cout << player2_name << " wins!" ;
    }
    else if (player1 == player2)
    {
        cout << "It's a tie!" ;
    }
}
