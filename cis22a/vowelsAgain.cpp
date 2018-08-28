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
int countLetters(string s)
{
    (string) s;
    int count= 0;
    for (int i = 0; i< s.length(); i++)
    {
        (int) s[i];
        if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122))
        {
            count++;
        }
    }
    return count;

}
int main()
{
    string repeat = "yes";
    while(repeat == "yes")
    {

        string sentence;
        int numVowels;
        int numLetters;
        cout << "Enter a sentence or q to quit: " ;
        getline(cin, sentence);
        if (sentence == "q" || sentence == "Q" || sentence == "quit" || sentence == "Quit")
        {
            cout << "Goodbye!" << endl;
            repeat = "no";
        }
        else
        {
            numVowels = countVowels(sentence);
            numLetters = countLetters(sentence);
            cout << "There are " << numVowels << " vowels in your sentence, and " << numLetters << " letters." << endl;
            repeat = "yes";
        }
    }
}
