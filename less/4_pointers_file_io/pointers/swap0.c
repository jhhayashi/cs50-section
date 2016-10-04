#include <stdio.h>
#include <stdlib.h>

// prototypes
void swap(int a, int b);


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

    // basic error checking
    if (!x && !y) return 2;

    // swaps
    printf("x = %d\ny = %d\n", x, y);
    printf("swapping...\n");
    swap(x, y);
    printf("swapped!\n");
    printf("x = %d\ny = %d\n", x, y);
}


void swap(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;
}
