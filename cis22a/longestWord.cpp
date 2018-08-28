/**
* Leomart Crisostomo
* CIS 22A M/W 9:30am
*/
#include <iostream>
using namespace std;
int main()
{
    string longest_word = "pseudopseudohypoparathyroidism" ;
    cout << "The length of pseudopseudohypoparathyroidism is " << longest_word.length() << " letters." << endl;
    cout << longest_word.substr(20,7) << endl;
    cout << longest_word.substr(16,11) << endl;
    cout << longest_word.substr(0,6) << endl;
    cout << longest_word.substr(12,4) << endl;
    cout << longest_word.substr(20,10) ;
}
