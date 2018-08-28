/**
* Leomart Crisostomo
* CIS 22A M/W 9:30am
*/
#include <iostream>
using namespace std;

int countVowels(string s)
{
    (string) s;
    int count = 0;
    for(int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            count++;
        }
        else if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            count++;
        }
    }
    return count;
}
int main()
{
    string sentence = "qo";
    while(sentence != "q" || sentence != "Q" || sentence != "quit" || sentence != "Quit")
    {
    int numVowels;
    cout << "Enter a sentence or q to quit: " ;
    getline(cin, sentence);
    numVowels = countVowels(sentence);

    cout << "There are " << numVowels << " vowels in your sentence." << endl;
    }
    cout << "Goodbye!" << endl;
}
