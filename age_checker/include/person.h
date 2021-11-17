#ifndef PERSON_H 
#define PERSON_H

// prevents redeclaration if used in multiple files, also called incude guards

typedef struct person
{
    char name[100];
    int age;
    char address[1000];
} Person;

/**
 * Util functions for person object
 */
Person get_person(char[100], int, char[1000]);
void print_person(Person*);

#endif
