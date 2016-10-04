#include <stdio.h>
#include <stdlib.h>

// prototypes
void swap(int* ptr_a, int* ptr_b);


int main (int argc, char* argv[])
{
    // checks for correct arguments
    if (argc != 3)
    {
        printf("expecting 2 arguments, you gave %d\n", argc - 1);
        return 1;
    }

    // casts arguments to ints
    int* x = malloc(sizeof(int));
    *x = atoi(argv[1]);
    int* y = malloc(sizeof(int));
    *y = atoi(argv[2]);

    // swaps
    printf("x = %d\ny = %d\n", *x, *y);
    printf("swapping...\n");
    swap(x, y);
    printf("swapped!\n");
    printf("x = %d\ny = %d\n", *x, *y);

    free(x);
    free(y);

    return 0;
}


void swap(int* ptr_a, int* ptr_b)
{
    int tmp = *ptr_a;
    *ptr_a = *ptr_b;
    *ptr_b = tmp;
}
