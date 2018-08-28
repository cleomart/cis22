//============================================================================
// Name        : Books.cpp
// Author      : Leomart Crisostomo
// Date        : April 28, 2017
// Copyright   : Copyright © 2017 Leomart. All rights resserved.
// Description : This program reads a file containing a list of books with title, author, genre and year published
//               into a vector of structures. Then, ask the user which book information would he/she like to sort
//               and print out the sorted books in a table format until the user quit the program.
//============================================================================

#include <algorithm>  //std::sort
#include <iostream>
#include <fstream>
#include <sstream>    //for stringstream
#include <vector>     //using vector
#include <string>
#include <iomanip>    //set the width of a table format

using namespace std;


/********************************************************************************
* This function structured a type called "Book" that has four fields of string.
* This will be used to declare a vector of Book type that has the title, author,
* genre and year published of a specific book.
*********************************************************************************/

struct Book {
    string title;
    string author;
    string genre;
    string year;
};



/*******************************************************************************
* This function reads the file "Books.txt" that consists the information (title,
* author, genre, year) of multiple books and store the corresponding fields to
* a structured Book vector. If the file failed to open, it returns false
* while returns true if succeeded.
********************************************************************************/

bool getBooks (vector<Book> &books);

bool getBooks (vector<Book> &books)
{
	ifstream inputFile;
	string line;
	Book b;

    inputFile.open("Books.txt");
    if (inputFile.fail())
    	return false;
    else
    {
		while (getline(inputFile, line))   // reads a line from the file
		{
			stringstream lineStream(line);   // transforms the line into a string stream

			//get fields from the string stream; fields are separated by comma in the input file
			getline(lineStream, b.title, ',');
			getline(lineStream, b.author, ',');
			getline(lineStream, b.genre, ',');
			getline(lineStream, b.year, ',');

			books.push_back(b); // add book to the vector

		}
		inputFile.close(); //close the file
    }
    return true;
}


bool compareByTitle(Book b1, Book b2) { return b1.title < b2.title;}
//compares the titles of each two elements in the vector

bool compareByAuthor(Book c1, Book c2) {return c1.author < c2.author;}
//compares the authors of each two elements in the vector
bool compareByGenre(Book d1, Book d2) {return d1.genre < d2.genre;}
//compares the genre of each two elements in the vector

bool compareByYear(Book e1, Book e2) {return e1.year < e2.year;}
//compares the year of each two elements in the vector




/***********************************************************************
* This function prints out the sorted attribute of the book requested
* by the user to the console using the range-based looop. It prints the
* title, author, genre and year published of the book in a table format.
************************************************************************/

void print(vector<Book> v);

void print(vector<Book> v)
{
    cout << endl;
    cout << fixed;

    cout << left << setw(45) << setfill(' ') << "Title";
    cout << left << setw(30) << setfill(' ') << " Author";
    cout << left << setw(30) << setfill(' ') << " Genre";
    cout << left << setw(10) << setfill(' ') << " Year Published" << endl;

    for (Book info: v) //prints out the sorted book information in a table format using range-based loop
    {
        cout << left << setw(45) << setfill(' ') <<  info.title;
        cout << left << setw(30) << setfill(' ') << info.author;
        cout << left << setw(30) << setfill(' ') << info.genre;
        cout << left << setw(10) << setfill(' ') <<  info.year << endl;

    }
    cout << endl;
}



int main()
{
	vector<Book> bookDatabase; //declared a book type vector called bookDatabase

	if (getBooks(bookDatabase))
	{
	    bool flag = true; //setting the signal for the do-while loop

	    cout<< "***This program sorts the title, author, genre, or year of multiple books.***\n" << endl;

	    do
        {

            char input;
            cout << "Please enter which attribute of the books would you want to sort\n" ;
            cout << "(\"t\" for title, \"a\" for author, \"g\" for genre, \"y\" for year published, or \"q\" to quit): " ;
            cin >> input; //ask the user which field of the book to sort

            switch (input) //evealuates the user's choice of which field of the book to sort
            {
                case 't' :
                    sort(bookDatabase.begin(), bookDatabase.end(), compareByTitle); //sort the title in alphabetical order
                    print (bookDatabase); //print the book information
                    break;

                case 'a':
                    sort (bookDatabase.begin(), bookDatabase.end(), compareByAuthor); //sort the author in alphabetical order
                    print (bookDatabase); //print the book information
                    break;

                case 'g':
                    sort(bookDatabase.begin(), bookDatabase.end(), compareByGenre); //sort the genre in alphabetical order
                    print (bookDatabase); //print the book information
                    break;

                case 'y':
                    sort(bookDatabase.begin(), bookDatabase.end(), compareByYear); //sort the year in ascending order
                    print (bookDatabase); //print the book information
                    break;

                case 'q': //quit the program
                    cout << "**********Thank you for using this program! Goodbye!**********" << endl;
                    flag = false;
                    break;

                default:
                    cout << "Invalid Input!\n" << endl;
                    break;
            }

	    } while (flag == true);
	}

	else
	{
	    cout << "Error getting the book information!" << endl; //the file failed to open
	}

}
