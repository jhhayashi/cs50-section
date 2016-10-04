/**
 * init function for hash tables
 * 
 * Jordan Hayashi
 *
 */

#include <stdio.h>
#include <stdlib.h>

#include "hash_table.h"


// prototypes
hash_table* init(int n);

int main(void)
{
    hash_table* my_table = init(10);
}


// initializes a hash table of size n
hash_table* init(int n)
{
    // validate input
    if (n < 1)
        return NULL;
    
    hash_table* my_table;

    // allocate table itself
    if ((my_table = malloc(sizeof(hash_table))) == NULL)
        return NULL;

    // allocate space for array of size n
    // also initialize all pointers in array to null
    if ((my_table->table = calloc(n, sizeof(node *))) == NULL)
        return NULL;

    // initialize size
    my_table->size = n;

    return my_table;
}
