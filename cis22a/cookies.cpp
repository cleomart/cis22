/**
* Leomart Crisostomo
* CIS 22A M/W 9:30am
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int chocolateChip;
    int chocolateMint;
    int peanutButter;
    int oatmealRaisin;
    double choc_total;
    double mint_total;
    double peanut_total;
    double oatmeal_total;
    const double PRCIE_CHOC_CHIP = 1.95;
    const double PRICE_MINT = 2.15;
    const double PRICE_PEANUT = 2.05;
    const double PRICE_OATMEAL = 1.85;
    double total;
    cout << "Welcome to Cookie Magic, where every bite of cookie is magical!" << endl;
    cout << "Allow me to assist you with your order!\n" ;
    cout << "\nWe sell the following flavors:\n" ;
    cout << "Chocolate Chip Cookies -- $1.95" << endl;
    cout << "Chocolate Mint Cookies -- $2.15" <<  endl;
    cout << "Peanut Butter Cookies -- $2.05" << endl;
    cout << "Oatmeal Raisin Cookies -- $1.85\n" << endl;
    cout << "Please enter the number of chocolate chip cookies you would like to purchase: " ;
    cin >> chocolateChip;
    cout << "Please enter the number of chocolate mint cookies you would like to purchase: " ;
    cin >> chocolateMint;
    cout << "Please enter the number of peanut butter cookies you would like to purchase: " ;
    cin >> peanutButter;
    cout << "Please enter the number of oatmeal raisin cookies you would like to purchase: " ;
    cin >> oatmealRaisin ;
    cout << "\nYou ordered the following:" << endl;
    cout << fixed << setprecision(2) ;
    choc_total = 1.95 * chocolateChip;
    mint_total = 2.15 * chocolateMint;
    peanut_total = 2.05 * peanutButter;
    oatmeal_total = 1.85 * oatmealRaisin;
    cout << "Chocolate Chip Cookies:\t" << chocolateChip << " @ $1.95 each...\t$" << choc_total << endl;
    cout << "Chocolate Mint Cookies:\t" << chocolateMint << " @ $2.15 each...\t$" << mint_total << endl;
    cout << "Peanut Butter Cookies:\t" << peanutButter << " @ $2.05 each...\t$" << peanut_total << endl;
    cout << "Oatmeal Raisin Cookies:\t" << oatmealRaisin << " @ $1.85 each...\t$" << oatmeal_total << endl;
    total = choc_total + mint_total + peanut_total + oatmeal_total;
    cout << "\nTotal: \t\t\t\t\t\t$" << total << endl << endl;
    cout << "Thank you for your order! Please come again!" << endl;
}

