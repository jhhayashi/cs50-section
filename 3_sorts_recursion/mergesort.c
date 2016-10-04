#include <stdio.h>
#include <string.h>

void p(char *s, int *list, int len);
void mergesort(int *list, int len);
void merge(int *list1, int *list2, int len1, int len2);

int main() {
    // test list to sort
    int list[] = {6,2,4,8,7,2,1,54,76,8,2,34,1,7,56,3,86,6};
    int len = sizeof(list) / sizeof(int);
    p("unsorted list:           ", list, len);

    // sort pls
    mergesort(list, len);

    // sanity check
    p("(hopefully) sorted list: ", list, len);
}

// prints a list prepended with s
void p(char *s, int *list, int len) {
    printf("%s[", s);
    for (int i = 0; i < len; i++) {
        printf("%i", list[i]);
        if (i < len - 1)
            printf(", ");
    }
    printf("]\n");
}

// woo O(n log n)
void mergesort(int *list, int len) {
    // base case
    if (len == 1) return;

    // recursive case
    mergesort(list, len / 2);
    // why (len - (len / 2))?
    mergesort(list + (len / 2), len - (len / 2));

    merge(list, list + (len / 2), len / 2, len - (len / 2));
}

// merges two lists into list1
// assumes list1 proceeds list2 in memory
void merge(int *list1, int *list2, int len1, int len2) {
    
    // copies the two sorted sublists into buffer arrays
    // this is inefficient
    int buffer1[len1];
    int buffer2[len2];
    memcpy(buffer1, list1, len1 * sizeof(int));
    memcpy(buffer2, list2, len2 * sizeof(int));

    // keep track of index of each array
    int sortedIndex = 0, buf1Index = 0, buf2Index = 0;

    while(1) {
        if (buffer1[buf1Index] < buffer2[buf2Index]) {
            list1[sortedIndex] = buffer1[buf1Index];
            buf1Index++;
        } else {
            list1[sortedIndex] = buffer2[buf2Index];
            buf2Index++;
        }
        sortedIndex++;
        
        // are we done yet
        if (buf1Index >= len1) {
            memcpy(list1 + sortedIndex, buffer2 + buf2Index, len2 - buf2Index);
            return;
        } else if (buf2Index >= len2) {
            memcpy(list1 + sortedIndex, buffer1 + buf1Index, len2 - buf1Index);
            return;
        }
    }
}
