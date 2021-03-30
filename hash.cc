#include "hash.hpp"
#include <list>
#include <cstring>
#define	TABLE_SIZE	10
HashTable::HashTable() {
    table=new HashTable*[tablesize];
    for (int i=0;i<tablesize;i++)
        table[i]=NULL;
}

int HashTable::hash(string key){
    int hash=0;
    int index;

    for(int i=0; i<key.length(); i++) {
        hash=hash + (int)key[i];
    }

    index= hash % tablesize;

    return index;
}

void HashTable::insertion(int key, int value){
    int count=0;
    for (int i=0;i<tablesize;i++)
    {
        if(table[i]!=NULL)
            count++;
        else
            break;
    }
    if(key==-1)
        table[count++]->setValue(value);
    else
    {
        for (int i=count;i>key;i--)
        {
            table[i]=table[i-1];
        }
        table[key]->setValue(value);
    }
}



void HashTable::printTable(){

    for(int i=0; i<tablesize; i++) {
//
    }


}




;