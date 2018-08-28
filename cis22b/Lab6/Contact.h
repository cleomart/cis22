/*
 * Contact.h
 *
 *  Created on: 6/11/17
 *      Author: hellenpacheco
 */

#ifndef CONTACT_H_
#define CONTACT_H_

#include <string>

class Contact {
private:
    struct ContactNode
    {
        std::string name;
        std::string phoneNumber;
        ContactNode *next;
    };
    ContactNode *head;
public:
    Contact()  { head = nullptr; }
    
    
    Contact(const Contact &obj);
    virtual ~Contact(); // destroys the list one node at a time
    void insertContact(std::string name, std::string phoneNumber); // do not allow duplicate names
    void deleteContact(std::string name); // deletes the corresponding node from the list
    void printContacts() const; // prints all contacts on the screen
    void searchContact(std::string newname);
};

#endif /* CONTACT_H_ */
