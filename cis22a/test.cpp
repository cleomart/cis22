//============================================================================
// Name        : 22B_Lab1.cpp
// Author      : Leomart Crisostomo
// Version     :
// Copyright   : Your copyright notice
// Description : Reads a text file containing a set of test scores and calculates the average, median and mode.
//============================================================================

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int calcMode(vector<int> w);

int main()
{
    fstream fin;
    string fileName;
    vector<int> v;
    string scores;
    cout << "Enter the file name:" ;
    cin >> fileName;

    fin.open(fileName);

    if(fin.fail())
    {
        cout<< "ERROR"<< endl;
    }

	while (fin>>scores)
    {
        int i = 0;
        scores = v[i];
        i++;
    }

    for (int i = 0; i<v.size(); i++)
    {
        cout << v[i] << endl;

    }

    /*calcMode(v);*/

}

/*int calcMode(vector<int> w)
{
    vector<int> freq(0);
    int highest, high_index, scores, mode;
    const int FREQSIZE = 101;
    for (int i = 0; i< w.size(); i++)
    {
        w[i] = scores;
        freq[scores]++;
    }


    /*int i = 0;
    highest = freq[i];
    high_index = i;

    for (i=0; i< FREQSIZE + 1; i++)
    {
        if (highest < freq[i+1])
        {
            highest = freq[i+1];
            high_index = i+1;
            i++;
        }
        else
        {

        }
            //do nothing
    }
    mode = high_index;
    return mode;
    return mode = 1;*/
