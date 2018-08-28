/**
* Leomart Crisostomo
* CIS 22A M/W 9:30am
*/

#include <iostream>
using namespace std;

int sumDouble(int a, int b);
//Given two int values, return their sum.
//Unless the two values are the same, then return double their sum.
//sumDouble(1, 2) → 3
//sumDouble(3, 2) → 5
//sumDouble(2, 2) → 8

bool makes10(int a, int b);
//Given 2 ints, a and b, return true if one of them is 10
// or if their sum is 10.
//makes10(9, 10) → true
//makes10(9, 9) → false
//makes10(1, 9) → true


bool monkeyTrouble(bool aSmile, bool bSmile);
//We have two monkeys, a and b, and the parameters
//aSmile and bSmile indicate if each is smiling.
//We are in trouble if they are both smiling
//or if neither of them is smiling.
//Return true if we are in trouble.
//monkeyTrouble(true, true) → true
//monkeyTrouble(false, false) → true
//monkeyTrouble(true, false) → false


bool or35(int a);
//Return true if the given non-negative number is a multiple of 3
//or a multiple of 5. Use the % "modulus" operator
//or35(3) → true
//or35(10) → true
//or35(8) → false


string notString(string str);
//Given a string, return a new string where "not " has been added to the front.
//However, if the string already begins with "not", return the string unchanged.
//notString("candy") → "not candy"
//notString("x") → "not x"
//notString("not bad") → "not bad"


string frontBack(string str);
//Given a string, return a new string where the first and last chars have been exchanged.
//frontBack("code") → "eodc"
//frontBack("a") → "a"
//frontBack("ab") → "ba"


bool hasTeen(int num1, int num2, int num3);
//We'll say that a number is "teen" if it is in the range 13..19 inclusive.
//Given 3 int values, return true if 1 or more of them is/are teen.
//hasTeen(13, 20, 10) → true
//hasTeen(20, 19, 10) → true
//hasTeen(20, 10, 13) → true



int main()
{
    int result;
    bool answer;
    string value;
    cout << "***Testing sumDouble***"<< endl << endl;
    result = sumDouble(1, 2);
    cout << "Should print 3: " << result << endl;
    result = sumDouble(3, 2);
    cout << "Should print 5: " << result <<endl;
    result = sumDouble(2, 2);
    cout << "Should print 8: " << result << endl << endl;

    cout << "***Testing makes10***"<< endl << endl;
    answer = makes10(9, 10);
    cout << boolalpha << "Should be true: " << answer << endl;
    answer = makes10(9, 9);
    cout << boolalpha << "Should be false: " << answer << endl;
    answer = makes10(1, 9);
    cout << boolalpha << "Should be true: " << answer << endl << endl;

    cout << "***Testing monkeyTrouble***"<< endl << endl;
    answer = monkeyTrouble(true, true);
    cout << boolalpha << "Should be true: " << answer << endl;
    answer = monkeyTrouble(false, false);
    cout << boolalpha << "Should be true: " << answer << endl;
    answer = monkeyTrouble(true, false);
    cout << boolalpha << "Should be false: " << answer << endl << endl;

    cout << "***Testing or35***"<< endl << endl;
    answer = or35(3);
    cout << boolalpha << "Should be true: " << answer << endl;
    answer = or35(10);
    cout << boolalpha << "Should be true: " << answer << endl;
    answer = or35(8);
    cout << boolalpha << "Should be false: " << answer << endl << endl;

    cout << "***notString***"<< endl << endl;
    value = notString("candy");
    cout << "Should be not candy: " << value << endl;
    value = notString("x");
    cout << "Should be not x: " << value << endl;
    value = notString("not bad");
    cout << "Should be not bad: " << value << endl << endl;

    cout << "***frontBack***"<< endl << endl;
    value = frontBack("code");
    cout << "Should be eodc: " << value << endl;
    value = frontBack("a");
    cout << "Should be a: " << value << endl;
    value = frontBack("ab");
    cout << "Should be ba: " << value << endl << endl;


    cout << "***Testing or35***"<< endl << endl;
    answer = hasTeen(13, 20, 10);
    cout << boolalpha << "Should be true: " << answer << endl;
    answer = hasTeen(20, 19, 10);
    cout << boolalpha << "Should be true: " << answer << endl;
    answer = hasTeen(20, 10, 13) ;
    cout << boolalpha << "Should be true: " << answer << endl;
    answer = hasTeen(20, 10, 45) ;
    cout << boolalpha << "Should be false: " << answer << endl << endl;

    cout << "***End of Tests***" << endl;

    return 0;

}

int sumDouble(int a, int b)
{
    int sum;
    if (a == b)
    {
        sum = (a+b) * 2;
    }
    else
    {
        sum = a + b;
    }
    return sum;
}

bool makes10(int a, int b)
{
    if (a == 10 || b == 10)
    {
        return true;
    }
    else if (a + b == 10)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool monkeyTrouble(bool aSmile, bool bSmile)
{
    if (aSmile == bSmile)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool or35(int a)
{
    if (a % 3 == 0 && a >= 0)
    {
        return true;
    }
    else if (a % 5 == 0 && a >= 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

string notString(string str)
{
    string sentence;
    string not_word = str.substr(0,3);
    if (not_word == "not")
    {
        sentence = str;
    }
    else
    {
        sentence = "not " + str;
    }
    return sentence;
}

string frontBack(string str)
{
    int last_index = str.length() - 1 ;
    string firstLetter = str.substr(0,1);
    string lastLetter = str.substr(last_index,1);
    string middle_sentence = str.substr(1, str.length() - 2);
    string exchanged;
    if (str.length() == 1)
    {
        exchanged = str;
    }
    else if (str.length() == 2)
    {
        exchanged = lastLetter + firstLetter;
    }
    else
    {
        exchanged = lastLetter + middle_sentence + firstLetter;
    }
    return exchanged;
}

bool hasTeen(int num1, int num2, int num3)
{
    if ((num1 >= 13 && num1 <=19) || (num2 >= 13 && num2 <=19) || (num3 >= 13 && num3 <=19))
    {
        return true;
    }
    else
    {
        return false;
    }
}

