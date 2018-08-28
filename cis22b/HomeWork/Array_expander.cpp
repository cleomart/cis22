//============================================================================
// Name        : Array_expander.cpp
// Author      : Leomart Crisostomo
// Date        : May 08, 2017
// Copyright   : Copyright © 2017 Leomart. All rights resserved.
// Description : This program expands a new array that is twice the size of the the current array by using dynamic memory allocation.
//============================================================================

#include <iostream>
using namespace std;

/***********************************************************************
//This function copies the contents of the argument array to the
//new array and initialize the unused elements of the second array to 0.
//Then, the function returns a pointer to the new array.
//**********************************************************************/

int * arrayExpander (int *a, int size);



int * arrayExpander (int *a, int size)
{
    int newSize = size * 2; //double the argument size
    int *b = nullptr; //initializing an appointer to nullptr
    b = new int[newSize]; //allocating the new array with the doubled size space of the argument array

    for (int i = 0; i < size ; i++) //copying the contents of the argument array to the the new array
    {
        b[i] = a[i];
    }

    for (int i = size; i < newSize; i++ ) //initiallizing the rest of the elements of the new array to 0
    {
        b[i] = 0;
    }

    return b; //return the memory address of the new array
}

int main() {

	const int SIZE = 9;
	cout << "Array expander tester..." << endl;

	int sourceArray[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int *expandedArray; //appointing an array

	expandedArray = arrayExpander (sourceArray, SIZE); //calling the dunction

	cout << "Here is the expanded array: "; // printing out the contents of the expanded array
	for (int i=0; i < 2*SIZE; i++)
		cout << expandedArray[i] << " ";

	return 0;
}

