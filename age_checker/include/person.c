#include "person.h"
#include <stdio.h>
#include <string.h>

Person get_person(char name[100], int age, char addr[1000])
{
    Person p;
    strcpy(p.name, name); // coping data
    p.age = age;
    strcpy(p.address, addr); // coping data
    return p;
}

void print_person(Person* p) {
    printf("Person{%s,\n%d,\n%s}\n", p->name, p->age, p->address);
}
