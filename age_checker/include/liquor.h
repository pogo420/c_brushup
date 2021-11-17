#ifndef LIQUOR_H
#define LIQUOR_H
#include "person.h"

const int LEGAL_AGE=18;

typedef enum {
    VODKA,
    GIN,
    BEER
} Liquor_type;

/**
 * function to check legal age of drinking
 */
int is_legal_age(Person*);

#endif
