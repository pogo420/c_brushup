#include "../include/person.h"


int main(){
    Person p = get_person("Arnab", 32, "34 BQL road");
    print_person(&p);
    return 0;
}
