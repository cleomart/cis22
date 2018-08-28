//============================================================================
// Name        : PhoneBook.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Program that tests the Contact class
//============================================================================

#include <iostream>
#include "Contact.h"
using namespace std;

int main() {
    cout << "Phonebook application\n" << endl;
    Contact Phonebook;
    Phonebook.insertContact("Hellen", "222-333-4444");
    cout << "************ Contacts after inserting Hellen *************" << endl;
    Phonebook.printContacts();
    Phonebook.insertContact("Dani", "333-444-5555");
    cout << "************ Contacts after inserting Dani *************" << endl;
    Phonebook.printContacts();
    Phonebook.insertContact("Beth", "444-555-6666");
    cout << "************ Contacts after inserting Beth *************" << endl;
    Phonebook.printContacts();
    cout << "************ Contacts after inserting Zach *************" << endl;
    Phonebook.insertContact("Zach", "555-666-7777");
    Phonebook.printContacts();
    
    
    //can add search function for extre credit
    //search anna, anna not found,
    //search for beth, the phone number for beth is .....
    string name;
    cout << "\n****************** Search Contact ******************\n" ;
    cout << "Please type in the contact you want to search for: ";
    cin >> name;
    Phonebook.searchContact(name);
    
    cout << "\n********************************************************" << endl;
    Phonebook.deleteContact("Dani");
    cout << "************ Contacts after deleting Dani *************" << endl;
    Phonebook.printContacts();
    Phonebook.deleteContact("Zach");
    cout << "************ Contacts after deleting Zach *************" << endl;
    Phonebook.printContacts();
    Phonebook.deleteContact("Beth");
    cout << "************ Contacts after deleting Beth *************" << endl;
    Phonebook.printContacts();
    Phonebook.deleteContact("Hellen");
    cout << "************ Contacts after deleting Hellen *************" << endl;
    Phonebook.printContacts();
    
    
    
    return 0;
}
