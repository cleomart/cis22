/**
* Leomart Crisostomo
* CIS 22A M/W 9:30am
*/
#include <iostream>
using namespace std;
int main()
{
    string sentence;
    int currentChar;
    cout << "Please enter a sentence: " ;
    getline(cin, sentence);
    cout << "Your sentence in all lower case: " ;
    for (int i = 0; i < sentence.length(); i++)
    {
        currentChar = (int) sentence[i];
        if (currentChar >= 65 && currentChar <= 90)
        {
            currentChar += 32;
            cout << (char) currentChar;
        }
        else if (currentChar >= 97 && currentChar <= 122)
        {
            cout << (char) currentChar;
        }
        else
        {
            cout << (char) currentChar;
        }

    }
    cout << "\nYour sentence in all capitals: " ;
    for (int i = 0; i < sentence.length(); i++)
    {
        currentChar = (int) sentence[i];
        if (currentChar >= 97 && currentChar <= 122)
        {
            currentChar -= 32;
            cout << (char) currentChar;
        }
        else if (currentChar >= 65 && currentChar <= 90)
        {
            cout << (char) currentChar;
        }
        else
        {
            cout << (char) currentChar;
        }
    }
    return 0;

}
