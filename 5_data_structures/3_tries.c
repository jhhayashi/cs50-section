#include <stdio.h>
#include <stdbool.h>

// letters plus apostrophe
#define CHILDREN 27

typedef struct node {
    bool val;
    struct node *children[CHILDREN];
} node;

// keep track of how many values
unsigned long long values = 0;

node *trie = NULL;

int main() {
    // how to insert?
    
    // how to look up?
    
    // how to free?

    return 0;
}
