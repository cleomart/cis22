//============================================================================
// Name        : Most_freq_char.cpp
// Author      : Leomart Crisostomo
// Date        : May 19, 2017
// Copyright   : Copyright © 2017 Leomart. All rights resserved.
// Description : This program returns the alphabetic character that appears the
//               most in a string of characters entered by the user.
//============================================================================

#include <iostream>
#include <vector> ///using vector
#include <cctype> ///using isalpha
using namespace std;


/**************************************************************************
* This function accepts a pointer to a C-string (array of characters).
* It counts the tally of every letter only, regardless of capitalization,
* in the string and store in a frequency array. Then, it returns the
* character that thas the most frequency.
***************************************************************************/
char mostFrequentCharacter (char *sentence);

int main()
{

    cout << "Most frequent ALPHABETIC character tester..." << endl;

    char sentence[1000];

    do
    {
        bool flag = false; ///flag for testing if the C-string has an alphabet letter

        for (int i = 0; i <1000; i++) ///initialize each element in the char array into 0 to avoid garbage value
        {
            sentence[i] = '0';
        }

        cout << "Enter a sentence (1000 characters max, enter 'end' to quit): ";
        cin.getline(sentence, 1000);


        for (int i = 0; i<1000; i++) ///check if the string of characters has a letter
        {
            if (isalpha(sentence[i]))
                flag = true; ///set flag to true once in has a letter
        }

        if(flag) ///if the C-string has a letter, give the most frequaent character
        {
            cout << "The most frequent alphabetic character in \"" << sentence << " \" is: " << mostFrequentCharacter(sentence) << "\n";
        }
        else ///if not, prompt the user
            cout << "There is no alphabet letter in " << sentence << endl;
    }
    while (strcmp(sentence, "end"));

    return 0;
}

char mostFrequentCharacter (char *sentence)
{
    char freqChar;
    const int SIZE = 26;

    /*******************************************************************
    * This vector allocates 26 spaces for integers and assign them to 0.
    * This will be used to store the frequency of the corresponding
    * ASCII value of each lowercase letter. (a-z => 97-122)
    *******************************************************************/

    vector <int> freq(SIZE, 0);
    int index = 0;

    for (int i = 0; i < 1000; i++)
    {

        if (isalpha(sentence[i])) ///test if the character is a letter
        {
            sentence[i] = tolower(sentence[i]); ///convert all the letters into lowercase
            index = (int) (sentence[i] - 'a'); ///cast char into int, then subtract 97 to default
                                               ///the starting index as 0 since letter a has an ASCII value of 97
            freq[index]++; ///increment the frquency
        }

    }

    int i =0;
    int highest = freq[i]; ///initialize the highest frequency as the first element in the array
    int high_index = i; ///set the first index as the high_index

    for (i=0; i< 26; i++)
    {
        if (freq[high_index] <= freq[i+1]) ///compare the first element with the second element
        {
            highest = freq[i+1]; ///change the highest frequency to the next element if second element is higher than the first element
            high_index = i+1; ///increment the high_index for the next test
        }
    }

    freqChar = (char) (high_index + 97); ///set the most frequent char by adding high_index to 97 then cast it to char

    return freqChar; ///return the most frequent char
}
