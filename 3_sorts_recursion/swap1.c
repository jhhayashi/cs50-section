#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b);
void p(int x, int y);

int main (int argc, char* argv[])
{
    // checks for correct arguments
    if (argc != 3) {
        printf("expecting 2 arguments, you gave %d\n", argc - 1);
        return 1;
    }

    // casts arguments to ints
    int x = atoi(argv[1]);
    int y = atoi(argv[2]);

    // basic error checking
    if (!x && !y) return 2;

    // swaps values of x and y
    p(x, y);
    printf("swapping...\n");
    swap(&x, &y);
    printf("swapped!\n");
    p(x, y);
}

// pass by reference
void swap(int* a, int* b)
{
    // goes to address stored in variable a, pulls value
    int tmp = *a;

    // takes value stored at address from b, puts at address of a
    *a = *b;

    // *b is now value from address from a
    *b = tmp;
}

void p(int x, int y) {
    printf("x = %d\ny = %d\n", x, y);
}
