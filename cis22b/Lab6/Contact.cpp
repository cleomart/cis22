//============================================================================
// Name        : PhoneBook.cpp
// Author      : Leomart Crisostomo
// Date        : June 21, 2017
// Copyright   : Copyright 2017 Leomart. All rights resserved.
// Description : This program implements the methods in the class Contact.h
//============================================================================



#include "Contact.h"
#include <iostream>
using namespace std;


//copy constructor
Contact::Contact(const Contact &obj){
    ContactNode *ptr;
    ptr = obj.head;
    while(ptr != nullptr){
        insertContact(ptr->name, ptr-> phoneNumber);
        ptr = ptr ->next;
    }

}


//destructor
Contact::~Contact()
{
    ContactNode *nodePtr;
    ContactNode *nextNode;
    nodePtr = head;
   
    while(nodePtr != nullptr)
    {
        nextNode = nodePtr->next;
        delete nodePtr;
        nodePtr = nextNode;
    }
}

//This function inserts the new contact information to the linked list
void Contact::insertContact(string newName,string newNum)
{
    ContactNode *newNode; // a pointer for the newNode
    ContactNode *nodePtr; // a pointer to traverse the list
    ContactNode *previousNode = nullptr; // the previous node
    
    //allocate newNode and store the phone number and name
    newNode = new ContactNode;
    newNode ->name = newName;
    newNode ->phoneNumber = newNum;
    
    //if there are no nodes in the list, make newNode the first node
    if(!head)
    {
        head = newNode;
        newNode->next = nullptr;
    }
    else // otherwise, insert newNode
    {
        // position head ptr at the head of the list
        nodePtr = head;
    
        //skip all nodes whose name is less than newname
        while(nodePtr != nullptr && nodePtr->name < newName)
        {
            previousNode = nodePtr;
            nodePtr = nodePtr->next;
        }
       
        //if list is empty
        if(previousNode == nullptr)
        {
            head = newNode;
            newNode->next = nodePtr;
        }
        else
        {
            previousNode->next = newNode;
            newNode->next = nodePtr;
        }
    }
}

//This function deletes a node from the linked list
void Contact::deleteContact(string newname)
{
    ContactNode *nodePtr;
    ContactNode *previousNode = nullptr;
    if(!head)
        return;
    if(head->name == newname)
    {
        nodePtr = head->next;
        delete head;
        head = nodePtr;
    }
    else
    {
        nodePtr = head;
        while(nodePtr != nullptr && nodePtr->name != newname)
        {
            previousNode = nodePtr;
            nodePtr = nodePtr->next;
        }
        if(nodePtr)
        {
            previousNode->next = nodePtr->next;
            delete nodePtr;
        }
    }
}


//This function displays the contact list
void Contact::printContacts() const
{
    ContactNode *nodePtr;
    nodePtr = head;
    while(nodePtr)
    {
        cout << nodePtr->name <<" ";
        cout << nodePtr->phoneNumber <<endl;
        nodePtr = nodePtr->next;
    }
}


//This function searches for a contact in the linked list and print the contact info
void Contact::searchContact(string newname)
{
    
    ContactNode *name = nullptr;
    ContactNode *previousNode = head;//temp
    ContactNode *nodePtr = head;//current
    
    while (nodePtr != nullptr && nodePtr->name != newname)
    {
        previousNode = nodePtr;
        nodePtr = nodePtr->next;
    }
    
    if (nodePtr != nullptr)
    {
        name = nodePtr;
        cout << nodePtr->name <<" ";
        cout << nodePtr->phoneNumber <<endl;
    }
    else{
        cout << "The contact does not exist!\n";
    }
}
