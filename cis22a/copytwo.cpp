/**
* Leomart CRisostomo
* ALondra Tlatelpa
* CIS 22A 9:30am M/W
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
    ifstream fin;
    ofstream fout;

    fin.open("infile.txt");
    if (fin.fail())
    {
        cout << "Input file fail to open.\n" ;
        exit(-1);
    }

    fout.open ("outfile.txt");
    if (fout.fail())
    {
        cout << "Output file fail to open.\n" ;
        exit(-1);
    }

    int first;
    fin >> first;
    int second;
    fin >> second;
    fout << "first = " << first << endl;
    fout << "second = " << second << endl;
    fin.close();
    fout.close();

}
