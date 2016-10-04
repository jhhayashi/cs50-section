#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[]) {

    // what is argc?
    if (argc == 1) {
        printf("number pls\n");
        return 1;
    }

    // what will this print?
    printf("%i\n", 50 + argv[1]);

    return 0;
}
