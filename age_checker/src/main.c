#include "../include/person.h"
#include "../include/liquor.h"
#include <stdio.h>

int main(){
    Person p = get_person("Arnab", 32, "34 BQL road");
    print_person(&p);

    printf("%d\n",is_legal_age(&p));
    return 0;
}
