
#ifndef bts_hpp
#define bts_hpp

#include <iostream>

class BSTNode
{
public:
    float Key;
    BSTNode * Left;
    BSTNode * Right;
    BSTNode * Parent;
};

class BST
{
private:
    BSTNode * root;

public:
    BSTNode * Insert(BSTNode * node, float key);
    void Insert(float key);
    void Print(BSTNode * node);
    void Print();
};

#endif