#include <iostream>
#include <list>
#ifndef hash_hpp
#define hash_hpp
using namespace  std;
class HashTable {

private:
    static const int tablesize=10;
    HashTable**table;
    int key;
    int value;
public:
    HashTable();
    int hash(string key);
    void insertion(int key, int value);
    void printTable();
    void setValue(int a_value)
    {
        value=a_value;
    }

    void removal(int key);
    string search(int key);


};
#endif