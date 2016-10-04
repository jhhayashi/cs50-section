#include <stdio.h>

int main() {
    // declaring the same array, right?
    char i[] = {97, 98, 99};
    char c[] = {'a', 'b', 'c'};
    char c1[] = {'a', 'b', 'c', '\0'};
    char *c2 = "abc";

    // sanity check
    printf("i = %s\n", (char *) i);
    printf("c = %s\n", (char *) c);
    printf("c1 = %s\n", (char *) c1);
    printf("c2 = %s\n", (char *) c2);


    // ===================================================
    // CHALLENGE PROBLEM
    // what does this print? can we get it to print out the same as the others?
    int i2[] = {97, 98, 99};
    printf("i2 = %s\n", (char *) i2);
    // ===================================================

    printf("\n");

    // what will these print? why?
    printf("sizeof(i) = %lu\n", sizeof(i));
    printf("sizeof(c) = %lu\n", sizeof(c));
    printf("sizeof(c1) = %lu\n", sizeof(c1));
    printf("sizeof(c2) = %lu\n", sizeof(c2));
    printf("sizeof(i2) = %lu\n", sizeof(i2));

    printf("\n");


    // these will all work, right? why or why not?
    /*
    i[0] = 98;
    i2[0] = 98;
    c[0] = 98;
    c1[0] = 98;
    c2[0] = 98;

    printf("i = %s\n", (char *) i);
    printf("i2 = %s\n", (char *) i2);
    printf("c = %s\n", (char *) c);
    printf("c1 = %s\n", (char *) c1);
    printf("c2 = %s\n", (char *) c2);
    */
}
