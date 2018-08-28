/**
* Alondra Tlatelpa & Leomart Crisostomo
* CIS M/W 9:30 am
*/

#include <iostream>

using namespace std;

void printTriangles(int base);

void printRectangles(int length, int width);

void printSquares(int base);

int main()
{
    int length;
    int width;
    int base;
    string shape;
    string repeat = "y";
    while(repeat == "y")
    {
        cout << "I will print squares for you!" << endl;
        cout << "Rectangles and triangles, too!\n" << endl;
        cout << "Enter the shape that you would like to print (rectangle, triangle, or square) : " ;
        cin >> shape;
        if (shape == "rectangle" || shape == "Rectangle")
        {
            cout << "Enter the length of the rectangle: " ;
            cin >> length;
            cout << "Enter the width of the rectangle: " ;
            cin >> width;
            printRectangles(length, width);
        }
        else if(shape == "triangle" || shape == "Triangle")
        {
            cout << "Enter the length of the triangle's base: " ;
            cin >> base;
            printTriangles(base) ;
        }
        else if (shape == "square" || shape == "Square")
        {
            cout << "Enter the length of the side of the side of the square: ";
            cin >> length;
            printSquares(length) ;
        }
        else
        {
            cout << "You entered an invalid shape!\n" << endl;
        }
        cout << "Would you like me to print more shapes for you? (y/n) ";
        cin >> repeat;
        cout << endl;
    }
    cout << "Thanks for \"square\" dancing with me!" << endl;
}

void printTriangles(int length)
{
    for (int row=1; row<= length; row++)
    {
        for (int col=1; col<=row; col++)

        {
            cout << "*";

        }
        cout << endl;
    }
}

void printRectangles(int length, int width)
{
    for (int row = 1; row <= width; row++)
    {
        for (int col = 1; col <= length; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void printSquares(int length)
{
    for (int row=1; row<= length; row++)
    {
        for (int col=1; col<= length; col++)

        {
            cout << "*";

        }
        cout << endl;
    }
}

