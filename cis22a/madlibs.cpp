/**
* Leomart Crisotomo
* CIS 22A M/W 9:30am
*/
#include <iostream>
using namespace std;
int main ()
{
   string first_name;
   string instructor_last_name;
   string food;
   string number;
   string adjective;
   string color;
   string animal;
   cout << "Welcome to Madlibs!\n" << endl;
   cout << "Please enter your first name: " ;
   cin >> first_name;
   cout << "Please enter your instructor's last name: " ;
   cin >> instructor_last_name;
   cout << "Please anter a food: " ;
   cin >> food;
   cout << "Please enter a number between 100 and 120: " ;
   cin >> number;
   cout << "Please enter an adjective: " ;
   cin >> adjective;
   cout << "Please enter a color: " ;
   cin >> color;
   cout << "Please enter an animal: " ;
   cin >> animal;
   cout << endl << endl;
   cout << "Dear Instructor " << instructor_last_name << " :" << endl << endl;
   cout << "I am sorry that I am unable to turn in my homework today. First I ate a rotten " << food << ", which made me\n" ;
   cout << "turn " << color << " and very sick." << " I came down with a fever of " << number << ". Next, my ";
   cout << adjective << " pet " << animal << " must have smelled " << endl << "the remains of the " << food << " on my homework," ;
   cout << " because my pet ate my homework.\n" << endl;
   cout << "I knew I should not have ordered that " << animal << " on eBay!" << endl << endl;
   cout << "I know you do not accept late homework but I am hoping you will make an exception in my case." << endl << endl;
   cout << "Sincerely," << endl;
   cout << first_name;
}
