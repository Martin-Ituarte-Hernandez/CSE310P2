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
#include "hash.hpp"
#include "bts.hpp"
#include <string>



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
   struct bst* appstore=new bst[0];



//temp array just for testing;
    double prices[] = {6.99, 0.00, 0.00, 0.10};

    for(const int & key : prices)
        tree->Insert(key);

    cout << "prices: ";
    std::cout << std::fixed;
    std::cout << std::setprecision(2);
    tree->Print();

HashTable* apps;
apps.

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
    }

    int categoriesnum;
    cin >> categoriesnum;
    struct categories *app_categories = (struct categories *) malloc( n * sizeof( struct categories ) );


    // for categories
    for (int i = 0; i < categoriesnum; i++) {
        string category_name;
        cin >> category_name ;
        app_categories[i].category->assign(category_name);
      //  cout << app_categories[i].category << "\n";
        cout << category_name << "\n";

    }
//for app names
    int appCount;
    cin >> appCount;
    struct app_info *app_infomation = (struct app_info *) malloc( n * sizeof( struct categories ) );

    for (int j = 0; j < appCount; j++) {

        string  category_name;
        string app_name;
        string version;
        float appsize;
        string units;
        float appprice;

        cin >> category_name ;
        cin >> app_name ;
        cin >> version ;
        cin >> appsize ;
        cin >> units ;
        cin >> appprice ;


    }
//for queries
    int queries_num;
    cin >> queries_num;
    for (int k = 0; k < queries_num; k++) {
        string queries;
        cin >> queries;

    }
    free (app_categories);
    free (app_infomation);
    return 0;
    */
}
