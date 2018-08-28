/**
* Leomart Crisostomo
* CIS 22A M/W 9:30am
*/
#include <iostream>
using namespace std;
int main()
{
    string sentence;
    cout << "Give me a sentence, and I will count the number of words." << endl;
    cout << "Please enter your sentence: ";
    getline(cin, sentence);
    int numWords = 1;
    for (int i = 0; i < sentence.length(); i++)
    {
        if (sentence[i] == ' ')
        {
        numWords++;
        }
    }
    cout << "There are " << numWords << " words in \"" << sentence << "\"" << endl;
    return 0;
}
