#include <stdio.h>
#include <stdlib.h>

// prototypes
void swap(int* a, int* b);


int main (int argc, char* argv[])
{
    // checks for correct arguments
    if (argc != 3)
    {
        printf("expecting 2 arguments, you gave %d\n", argc - 1);
        return 1;
    }

    // casts arguments to ints
    int x = atoi(argv[1]);
    int y = atoi(argv[2]);

    // swaps values of x and y
    printf("x = %d\ny = %d\n", x, y);
    printf("swapping...\n");
    swap(&x, &y);
    printf("swapped!\n");
    printf("x = %d\ny = %d\n", x, y);
}


void swap(int* a, int* b)
{
    // goes to address stored in variable a, pulls value
    int tmp = *a;

    // takes value stored at address from b, puts in a
    *a = *b;

    // b is now value stored at address from a
    *b = tmp;

}
