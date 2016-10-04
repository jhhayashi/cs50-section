/**
 * types for trie
 *
 * Jordan Hayashi
 *
 */

#include <stdbool.h>

typedef struct node
{
    // if end of word
    bool is_word;

    struct node* children[26];
}
node;
