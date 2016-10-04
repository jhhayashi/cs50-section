/* 
 * Implementation of sorted linked list
 * (there is no reason to keep it sorted)
 *
 * Jordan Hayashi
 *
 */

#include <stdio.h>
#include <stdlib.h>

#include "ll.h"

// prototypes
node* init(int numbers[], int n);
node* insert(int n, node* head);
node* delete(int n, node* head);
void ll_print(node* head);
int ll_len(node* head);

// sort using qsort
void sort(int numbers[], int n);

int main(void)
{
    int tmp[] = {3,5,2,4,1,7,6,8,9,0};

    node* list = init(tmp, 10);

    ll_print(list);

    printf("inserting 10\n");
    list = insert(10, list);
    ll_print(list);

    printf("removing 0 and 5\n");
    list = delete(0, list);
    list = delete(5, list);
    ll_print(list);

    printf("final length of list: %d\n", ll_len(list));

    return 0;
}

node* init(int numbers[], int n)
{
    if (n < 1)
        return NULL;

    // sort numbers
    sort(numbers, n);

    // init head
    node* head = malloc(sizeof(node));
    head->val = numbers[0];
    head->next = NULL;

    // keep track of previous node
    node* prev = head;

    for (int i = 1; i < n; i++)
    {
        // init new node
        node* tmp = malloc(sizeof(node));
        tmp->val = numbers[i];
        tmp->next = NULL;

        // update prev
        prev->next = tmp;
        prev = tmp;
    }

    return head;
}

// inserts n and returns pointer to first element
node* insert(int n, node* head)
{
    if (head == NULL)
    {
        int tmp[] = {n};
        return init(tmp, 1);
    }

    // keep track of where in list
    node* curr = head;

    // find where to insert
    while (curr->next != NULL && (curr->val < n))
        curr = curr->next;

    // insert after head
    node* tmp = malloc(sizeof(node));
    tmp->val = n;
    tmp->next = curr->next;
    curr->next = tmp;

    return head;
}

// deletes n and returns pointer to first element
node* delete(int n, node* head)
{
    if (head == NULL)
        return NULL;
    

    node* prev = NULL;
    node* curr = head;

    // if deleting first node
    if (head->val == n)
    {
        node* tmp = head->next;
        free(head);
        return tmp;
    }

    // iterate through looking for n
    while(curr->next != NULL)
    {
        // if node to delete
        if (curr->val == n)
        {
            // remove node
            node* tmp_next = curr->next;
            free(curr);

            // update pointers
            if (prev == NULL)
                return tmp_next;
            else
                prev->next = tmp_next;
        }

        // move to next node
        prev = curr;
        curr = curr->next;
    }

    return head;

}

// prints out elements in linked list
void ll_print(node* head)
{
    printf("[");

    while (head != NULL)
    {
        // print value
        printf("%d", head->val);

        // print commas as needed
        if (head->next != NULL)
            printf(", ");

        head = head->next;
    }

    printf("]\n");
}

// returns length of list
int ll_len(node* head)
{
    if (head == NULL)
        return 0;

    int counter = 1;

    while (head->next != NULL)
    {
        counter++;
        head = head->next;
    }

    return counter;
}

// sort function
int compare_int(const void* a, const void* b)
{
    if (*(int*)a == *(int*)b)
        return 0;
    return *(int*)a < *(int*)b ? -1 : 1;
}

void sort(int numbers[], int n)
{
    qsort(numbers, n, sizeof(int), compare_int);
}
