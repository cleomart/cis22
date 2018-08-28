//============================================================================
// Name        : 22B_Lab1.cpp
// Author      : Leomart Crisostomo
// Version     :
// Copyright   : Copyright © 2017 Leomart. All rights resserved.
// Description : Reads a text file containing a set of test scores and calculates the average, median, and mode.
//============================================================================

#include <iostream>
#include <vector>    //std::vector
#include <fstream>   //filestream
#include <algorithm> //std::sort
#include <iomanip>   //setprecision

using namespace std;

bool getScores(vector<int> & a);
//prompts a user to enter the file name that consists of test scores
//reads the scores from a file then store into a vector

double calcAverage(vector<int> c);
//calculates the average of the test scores

double calcMedian(vector<int> d);
//calculates the median of the test scores

int calcMode(vector<int> e);
//determines the mode of the test scores

void print(vector<int> f, double average, double median, int mode);
//prints out the test scores from least to greatest
//prints out the average, median, and mode


int main()
{

    vector<int> testScores;
    double avg, med;
    int mod;

    if (getScores(testScores))
    {

        std::sort (testScores.begin(), testScores.end()); //sort the elements of the vector from least to greatest

        avg = calcAverage (testScores);
        med = calcMedian (testScores);
        mod = calcMode (testScores);
        print(testScores, avg, med, mod);
    }
    else
    {
        cout << "Error getting test scores" << endl;
    }

    return 0;
}


bool getScores(vector<int>& a)
{
    ifstream fin;
    string fileName;
    double scores;

    cout << "***This program calculates the statistics of a set of test scores from a file***\n\n" ;
    cout<< "Please enter the name of the file: " ;
    cin>> fileName;

    fin.open(fileName.c_str()); //open the file

    while(fin.fail()) //test the file it it is valid
    {
        cout<< "Input file fail to open.\n";
        cout << "Please enter the name of the file again:" ;
        cin >> fileName;
        fin.open(fileName.c_str());
    }

    while(fin >>scores)
    {
        a.push_back(scores); //putting the scores into a vector
    }

    fin.close(); //closing the file

    if (a.empty())
    {
        return false; //file is empty
    }
    else
    {
        return true;
    }
}


double calcAverage(vector<int> c)
{
    double average;
    double sum = 0;
    for (int i=0; i<c.size(); i++) //adds the total of all the scores
    {
        sum += c[i];
    }
    average = sum / c.size();
    return average;

}


double calcMedian(vector<int> d)
{
    double median;
    if(d.size()%2 == 1)
    {
        median = d[d.size()/2]; //if the number of scores is odd, the middle score is the median
    }
    else
    {
        median = (d[(d.size()/2) - 1] + d[d.size()/2 ]) / 2.0; //if the number of scores is even, take the average of the two middle scores
    }
    return median;
}

int calcMode(vector<int> e)
{
    const int SIZE = 101;     //Scores range from 0-100
    vector<int> freq(SIZE, 0);
    int highest, high_index, scores, mode;


    for (int i = 0; i< e.size(); i++)
    {
        scores = e[i];
        freq[scores]++;
    }

    int i = 0;
    highest = freq[i];
    high_index = i;

    for (i=0; i< SIZE; i++)
    {
        if (freq[high_index] <= freq[i+1])
        {
            highest = freq[i+1];
            high_index = i+1;
        }
        else
            i++;
    }
    mode = high_index;
    return mode;
}


void print(vector<int> f, double average, double median, int mode)
{
    cout << "\nThe test scores in ascending order are: " ;

    for (int val: f) //using range-based loop to display the vector elements
    {
        cout << val << " ";
    }
    cout << fixed << setprecision(1) << "\n\nThe average is " << average << endl;
    cout << "The median is " << median <<  endl;
    cout << "The mode is " << mode << endl;
}
