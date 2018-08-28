/**
* Leomart Crisostomo
* CIS 22A M/W 9:30am
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
int main()
{
    int count = 0;
    string fileName;

    cin>> fileName;
    string word, line;
    ifstream fin;
    ofstream fout;

    fin.open(fileName);
    if (fin.fail())
    {
        cout << "Input file failed to open!" << endl;
        exit(-1);
    }

    fout.open("statistics.txt");
    if (fout.fail())
    {
        cout << "Output file failed to open!" << endl;
        exit(-1);
    }

    while (fin >> word)
    {
        count++;
    }

    fout << "The sonnet has " << count << " words\n" ;

    fin.close();

    ifstream fin2;

    fin2.open("sonnet.txt");
    if (fin2.fail())
    {
        cout << "Input file failed to open!" << endl;
        exit(-1);
    }

    count = 0;
    while (getline(fin2, line))
    {
        count++;
    }

    fout << "There are " << count << " lines." << endl;

    fin2.close();
    fout.close();





    return 0;

}
