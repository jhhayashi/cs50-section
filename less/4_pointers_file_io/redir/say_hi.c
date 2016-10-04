#include <stdio.h>

#define TOTAL 100

int main(int argc, char* argv[])
{
    int input[TOTAL];

    for (int i = 0; i < TOTAL; i++)
    {
        printf("int pls:\n");
        scanf("%d", &input[i]);
    }

    for (int i = 0; i < TOTAL; i++)
        printf("hi, %d!\n", input[i]);

}
