#include <stdio.h>
#include <cs50.h>

// cause i'm lazy
void p(void* s) {
    printf("%s\n", (char*) s);
}

int main(void) {

    // ===========================================================
    // Exercise:
    // how to fill a char array with alphabet?
    char alphabet[] = {'a', 'b', 'c'};
    char alphabet1[26];
 
    printf("%c, %c, %c\n", alphabet[0], alphabet[1], alphabet[2]);
    printf("sizeof alphabet: %lu\n", sizeof(alphabet));
    printf("sizeof alphabet1: %lu\n", sizeof(alphabet1));
    // ===========================================================



    // ===========================================================
    // what's the difference?
    char name0[] = "Hayashi";
    string name1 = "Hayashi";

    p(name0);
    p(name1);

    // what will these print?
    printf("sizeof name0: %lu\n", sizeof(name0));
    printf("sizeof name1: %lu\n", sizeof(name1));

    char name2[] = "Jordan";
    string name3 = "Jordan";

    // how about now? why?
    printf("sizeof name2: %lu\n", sizeof(name2));
    printf("sizeof name3: %lu\n", sizeof(name3));

    // what will happen? and why?
    /*
    name0[0] = 'h';
    p(name0);
    name1[0] = 'h';
    p(name1);
    */
    // ===========================================================
}
