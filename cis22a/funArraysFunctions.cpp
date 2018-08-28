/**
* Leomart Crisostomo
* CIS 22A M/W 9:30am
*/

#include <iostream>
using namespace std;

bool first10Last(int data[], int size);
//Given an array of ints, return true if 10 appears as
//either the first or last element in the array. The array will be size 1 or more.
//first10Last([1, 2, 10], 3) → true
//first10Last([10, 1, 2, 3], 4) → true
//first10Last([13, 10, 1, 2, 3], 5) → false

bool equalFirstLast(int array[], int size);
//Given an array of ints, return true if the array is size 1 or more,
//AND the first element and the last element are equal.
//equalFirstLast([1, 2, 3], 3) → false
//equalFirstLast([1, 2, 3, 1], 4) → true
//equalFirstLast([1, 2, 1], 3) → true

void printArray(int array[], int size);
//prints the contents of an array with a for loop
//see class notes for examples

void arrayPlus2(int array[], int size);
//Given an array of ints, add 2 to each element in the array
//return nothing. Remember arrays are automatically pass by reference
//arrayPlus2([1,2,3],3) -> [3, 4, 5]
//arrayPlus2([10, 30, 50, 79, 85], 5) -> [12, 32, 52, 81, 87]
//arrayPlus2([5], 1) -> [7]

void squareArray(int array[], int size);
//Given an array of ints, add multiplies each element in the array by itself
//return nothing. Remember arrays are automatically pass by reference
//squareArray([1,2,3],3) -> [1, 4, 9]
//squareArray([3, 5, 6, 8, 9], 5) -> [9, 25, 36, 64, 81]
//squareArray([5], 1) -> [25]


int main()
{

    bool answer;
    cout << boolalpha;

    cout << "***Testing first10Last***"<< endl << endl;
    int array1[] = {1, 2, 10};
    const int SIZE1 = 3;
    answer = first10Last(array1, SIZE1);
    cout << "Should print true: " << answer << endl;
    int array2[] = {10, 1, 2, 3};
    const int SIZE2 = 4;
    answer = first10Last(array2, SIZE2);
    cout << "Should print true: " << answer << endl;
    int array3[] = {13, 10, 1, 2, 3};
    const int SIZE3 = 5;
    answer = first10Last(array3, SIZE3);
    cout << "Should print false: " << answer << endl << endl;

    cout << "***Testing equalFirstLast***"<< endl << endl;
    int array4[] = {1, 2, 3};
    const int SIZE4 = 3;
    answer = equalFirstLast(array4, SIZE4);
    cout << "Should be false: " << answer << endl;
    int array5[] = {10, 20, 50, 60, 80, 90, 10};
    const int SIZE5 = 7;
    answer = equalFirstLast(array5, SIZE5);
    cout << "Should be true: " << answer << endl;
    int array6[] = {1};
    const int SIZE = 1;
    answer = equalFirstLast(array6, SIZE);
    cout << "Should be true: " << answer << endl << endl;

    cout << "***Testing arrayPlus2***" << endl << endl;
    int array7[] = {1, 2, 3};
    const int SIZE7 = 3;
    arrayPlus2(array7, SIZE7);
    cout << "Should print 3 4 5: " << endl;
    printArray(array7, SIZE7);
    cout << endl;
    int array8[] = {10, 30, 50, 79, 85};
    const int SIZE8 = 5;
    arrayPlus2(array8, SIZE8);
    cout << "Should print 12 32 52 81 87: " << endl;
    printArray(array8, SIZE8);
    cout << endl;
    int array9[] = {5};
    const int SIZE9 = 1;
    arrayPlus2(array9, SIZE9);
    cout << "Should print 7: " << endl;
    printArray(array9, SIZE9);
    cout << endl << endl;

    cout << "***Testing squareArray***" << endl << endl;
    int array10[] = {1, 2, 3};
    const int SIZE10 = 3;
    squareArray(array10, SIZE10);
    cout << "Should print 1 4 9: " << endl;
    printArray(array10, SIZE10);
    cout << endl;
    int array11[] = {3, 5, 6, 8, 9};
    const int SIZE11 = 5;
    squareArray(array11, SIZE11);
    cout << "Should print 9 25 36 64 81: " << endl;
    printArray(array11, SIZE11);
    cout << endl;
    int array12[] = {5};
    const int SIZE12 = 1;
    squareArray(array12, SIZE12);
    cout << "Should print 25: " << endl;
    printArray(array12, SIZE12);
    cout << endl << endl;

    cout << "***End of Tests***" << endl;

    return 0;
}

bool first10Last(int data[], int size)
{
    if (data[0] == 10 || data[size-1] == 10)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool equalFirstLast(int array[], int size)
{
    if (size >= 1 && array[0] == array[size-1])
    {
        return true;
    }
    else
    {
        return false;
    }
}

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " " ;
    }
}

void arrayPlus2(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        array[i] += 2;
    }
}

void squareArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        array[i] *= array[i];
    }
}







