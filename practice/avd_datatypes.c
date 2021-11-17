#include <stdio.h>
#include <string.h>

enum age_type {

    ADULT,
    AMATURE,
    OLD

};

typedef struct point
{
    int x;
    int y;
} Point;


struct avd_datatypes {

    char name[100];
    enum age_type age_static;

};

struct avd_datatypes* modify(struct avd_datatypes* s) {

    s->age_static = AMATURE;
    strcpy(s->name, "Arnab"); 
    return s;

}

int main() {

    char string1[10] = "pogo"; // it might create unused initialization, string is terminated with a special character ‘\0’
    char string2[] = "hello"; // automated string initialization 

    printf("%s - %lu : %s - %lu \n", string1, sizeof(string1), string2, sizeof(string2));

    struct avd_datatypes person;
    struct avd_datatypes person2 = {0};  // standard way to initalize

    strcpy(person.name, "Pogo");
    person.age_static = OLD;

    printf("%d\n", person.age_static);
    printf("%s\n", person.name);
    printf("----------------------------------\n");
    modify(&person);
    printf("%d\n", person.age_static);
    printf("%s\n", person.name);
    printf("----------------------------------\n");
    printf("-%d\n", person2.age_static);
    printf("-%s\n", person2.name);
    printf("----------------------------------\n");
    Point p = {0};
    printf("-%d\n", p.x);
    printf("-%d\n", p.y);
    return 0;
}
