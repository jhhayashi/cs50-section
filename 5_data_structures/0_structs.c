#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// what is a struct?

int main() {
    // basic declaration
    struct student {
        char *name;
        int age;
    };

    // would now need to declare like this:
    struct student jordan;
    jordan.name = "jordan";
    jordan.age = 22;

    // or one of these shorthands
    struct student jordan2 = {"jordan", 22};
    struct student jordan3 = {.age = 22, .name = "jordan"};

    // how to access fields?
    printf("student's name is: %s\n", jordan.name);
    printf("and he is %i years old.\n", jordan.age);


    // ==================================================================
    // ==================================================================
   

    // structs can contain references to their own data type too
    struct student2 {
        char *name;
        int age;
        struct student2 *bff;
    };

    struct student2 jordan4;
    jordan4.name = "jordan";
    jordan4.age = 22;
    // it's a sad, sad life
    jordan4.bff = NULL;

    struct student2 davidmalan = {"david", INT_MAX, &jordan4};

    // how to access fields via pointer?
    printf("%s's bff is %s\n", davidmalan.name, (*davidmalan.bff).name);

    // there has to be a better way
    printf("%s's bff is %s\n", davidmalan.name, davidmalan.bff->name);
    

    // ==================================================================
    // ==================================================================


    // you can typedef a struct so you don't have to keep typing "struct"
    // btw, never typedef inside main
    typedef struct temp_name_for_the_student_struct {
        char *name;
        int age;
        struct temp_name_for_the_student_struct *favoriteTF;
    } student3;

    // now we can use student3 as a type
    student3 jordan5;
    jordan5.name = "jordan";
    jordan5.age = 22;
    // i'm so vain
    jordan5.favoriteTF = &jordan5;
    printf("dammit, %s, that's an infinite loop!\n",
        jordan5.favoriteTF->favoriteTF->favoriteTF->favoriteTF->name);

    // we can also declare structs on the heap
    student3 *heap_student = malloc(sizeof(student3));
    if (!heap_student) return 1;
    heap_student->name = "david";
    heap_student->age = INT_MAX;
    // heh
    heap_student->favoriteTF = &jordan5;
}
