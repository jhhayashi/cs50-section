#include <stdio.h>
#include <string.h>

void p(char *s, int *list, int len);
void mergesort(int *list, int len);
void merge(int *list1, int *list2, int len1, int len2);

int main() {
    int list[] = {6,2,4,8,7,2,1,54,76,8,2,34,1,7,56,3,86,6};
    int len = sizeof(list) / sizeof(int);
    p("unsorted list: ", list, len);
    mergesort(list, len);
    p("unsorted list: ", list, len);
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
    if (len == 1) return;
    mergesort(list, len / 2);
    mergesort(list + (len / 2), len - (len / 2));
    merge(list, list + (len / 2), len / 2, len - (len / 2));
}

// merges two lists, assumes list1 proceeds list2 in memory
void merge(int *list1, int *list2, int len1, int len2) {
    
    // this is inefficient
    int a[len1];
    int b[len2];
    memcpy(a, list1, len1 * sizeof(int));
    memcpy(b, list2, len2 * sizeof(int));

    int i = 0, j = 0, k = 0;

    while(1) {
        if (a[j] < b[k]) {
            list1[i] = a[j];
            j++;
        } else {
            list1[i] = b[k];
            k++;
        }
        i++;
        
        // are we done yet
        if (j >= len1) {
            memcpy(list1 + i, b + k, len2 - k);
            return;
        } else if (k >= len2) {
            memcpy(list1 + i, a + j, len2 - j);
            return;
        }
    }
}
