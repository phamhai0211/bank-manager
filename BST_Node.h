#ifndef BST_NODE_H_INCLUDED
#define BST_NODE_H_INCLUDED
#include<iostream>
#pragma once
#include <vector>
#include <fstream>
#include <string>
using namespace std;
class BST_Node
{
public:
    BST_Node * left;
    BST_Node * right;
    string name;
    string address;
    int account_number;
    int password;
    int balance;

    BST_Node();
    BST_Node(string, string, int, int, int);
};

#endif // BST_NODE_H_INCLUDED
