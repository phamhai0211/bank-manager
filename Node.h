#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED
#include <iostream>
#pragma once
#include <fstream>
#include "NODE_1.h"
#include <string>
using namespace std;

class Node{
public:
    Node *next;
    Node_1 *pre;
    int data;
    Node();
    Node(int);
};


#endif // NODE_H_INCLUDED
