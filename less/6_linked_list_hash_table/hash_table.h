/**
 * types for hash table
 *
 * Jordan Hayashi
 *
 */

typedef char* string;

typedef struct node
{
    string value;
    struct node* next;
}
node;

// for hash table itself
typedef struct hash_table
{
    // size of the table (len of array)
    int size;

    // table elements
    // dynamic array, since we don't know size of table
    // if we knew size, we could do: node* table[size];
    node** table;
}
hash_table;
