#include <strings.h>
#include <stdio.h>

typedef struct typedef_check
{
   char* name;
   int age;
} Person;


void print_person(Person* p) {
    printf("-----------------------\n");
    printf("Name:%s\n", p->name);
    printf("Age:%d\n", p->age);
}

int main(int argc, char const *argv[])
{
    Person arnab;
    strncpy(arnab.name, "Arnab", 5);
    arnab.age = 19;

    print_person(&arnab);

    return 0;
}
