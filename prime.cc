///////////////////////////////////////////////////////////////////////////////
//
//  This implments a brute force method of determining the prime numbers
//  in a given range 1..n.
//
//
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <iomanip>
using namespace std;
#include <math.h>
#include "defn.h"
#include "heap.h"
#include "hash.h"
#include "bts.hpp"
#include <string>
#include <cstring>


bool TestForPrime( int val )
{
    int limit, factor = 2;

    limit = (long)( sqrtf( (float) val ) + 0.5f );
    while( (factor <= limit) && (val % factor) )
        factor++;

    return( factor > limit );
}
int main()
{
    int i, n, p;
    BST * tree = new BST;
    struct app_info apps;
   struct bst* appstore=new bst[2];

    double prices[] = {6.99, 0.00, 0.00, 0.10};

    for(const double& key : prices)
        tree->Insert(key);

    cout << "Tree keys: ";
    std::cout << std::fixed;
    std::cout << std::setprecision(2);
    tree->Print();



/*
    printf( "Enter number n of numbers to test as primes.\n" );
    scanf( "%d", &n );
    printf( "Now enter %d numbers to test as prime.\n", n );
    fflush( stdout );

    for( i = 0; i < n; i++ ){
        printf( "Enter number:\n" );
        scanf( "%d", &p );

        if( TestForPrime( p ) )
            printf( "%d is a prime.\n", p );
        else
            printf( "%d is not a prime.\n", p );
    }*/

    int categories;
    cin >> categories;

    // for categories
    for (int i = 0; i < categories; i++) {
        string category_name;
        cin >> category_name ;
        cout << category_name << "\n";

    }
//for app names
    int appCount;
    cin >> appCount;
    for (int j = 0; j < appCount; j++) {

        string category_name;
        string app_Name;
        string version;
        float appsize;
        string units;
        float appprice;

        cin >> category_name ;
        cin >> category_name ;
        cin >> version ;
        cin >> appsize ;
        cin >> units ;
        cin >> appprice ;

        cout  << apps.category << "\n";
        cout  << apps.app_name << "\n";
        cout  << apps.version << "\n";
        cout  << apps.size << "\n";
        cout  << apps.units << "\n";
        cout  << apps.price << "\n";
    }

    int queries;
    cin >> queries;
    for (int k = 0; k < queries; k++) {

        string queriesNum;
        cin >> queriesNum;

    }

    return 0;
}
