
#ifndef bts_hpp
#define bts_hpp

#include <iostream>

class BSTNode
{
public:
    int Key;
    std::string keys;
    BSTNode * Left;
    BSTNode * Right;
    BSTNode * Parent;
};

class BST
{
private:
    BSTNode * root;

public:
    BSTNode * Insert(BSTNode * node, int key);
    void Insert(int key);
    void Print(BSTNode * node);
    void Print();
};

#endif