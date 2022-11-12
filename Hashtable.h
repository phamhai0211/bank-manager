#ifndef HASHTABLE_H_INCLUDED
#define HASHTABLE_H_INCLUDED
#pragma once
#include "Node.h"
#include "NODE_1.h"

class Hashtable{
public:
    Node *start;
    Hashtable();
    void starthash();
    void loadhashtable();
    void add(int,int);
    bool match(int,int);
    void display();
    void displayPasswords();
    void delete_password(int);

};


#endif // HASHTABLE_H_INCLUDED
