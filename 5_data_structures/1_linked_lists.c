#include <stdio.h>
#include <stdlib.h>

// define the data type of each node
typedef struct node {
    int val;
    struct node *next;
} node;

int main() {
    
    // linked list needs to keep track of its head
    node *head;

    // create first node
    node first = {0, NULL};

    // head needs to point to first node
    head = &first;

    // create second node
    node *new = calloc(1, sizeof(node));
    if (!new) return 1;
    new->val = 1;

    // insert new node to front of list
    head = new;
    // now point the new node's next pointer to the original head...oh wait
    

    // order matters! good thing we still know where the first node is..
    head = &first;

    // let's try that again
    new->next = head;
    head = new;

    // but shouldn't we keep the linked list sorted?
    
    // how to do delete?

    // also fyi, doubly linked lists exist. their node definition is below:
    /*
    struct node {
        int val;
        struct node *next;
        struct node *prev;
    };
    */
}
