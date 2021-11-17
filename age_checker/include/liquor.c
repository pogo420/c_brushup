#include "liquor.h"

int is_legal_age(Person* p) {
    if (p->age >= LEGAL_AGE) {
        return 1;
    }
    else {
        return 0;
    }
}
