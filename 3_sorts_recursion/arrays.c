#include <stdio.h>

int main() {
    int x[] = {97, 98, 99};
    char x2[] = {97, 98, 99};
    char c[] = {'a', 'b', 'c'};
    char c1[] = {'a', 'b', 'c', '\0'};
    char *c2 = "abc";

    printf("x = %s\n", (char *) x);
    printf("x2 = %s\n", (char *) x2);
    printf("c = %s\n", (char *) c);
    printf("c1 = %s\n", (char *) c1);
    printf("c2 = %s\n", (char *) c2);

    printf("\n");

    printf("sizeof(x) = %lu\n", sizeof(x));
    printf("sizeof(x2) = %lu\n", sizeof(x2));
    printf("sizeof(c) = %lu\n", sizeof(c));
    printf("sizeof(c1) = %lu\n", sizeof(c1));
    printf("sizeof(c2) = %lu\n", sizeof(c2));

    printf("\n");


    /*
    x[0] = 98;
    x2[0] = 98;
    c[0] = 98;
    c1[0] = 98;
    c2[0] = 98;

    printf("x = %s\n", (char *) x);
    printf("x2 = %s\n", (char *) x2);
    printf("c = %s\n", (char *) c);
    printf("c1 = %s\n", (char *) c1);
    printf("c2 = %s\n", (char *) c2);
    */
}
