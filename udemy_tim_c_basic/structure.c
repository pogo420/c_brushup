# include <stdio.h>
# include <string.h>

struct date
{
    /* data */
    int day;
    int month;
    int year;
};

struct date today = {2, 4, 1990}; // initialization 


struct person
{
    /* data */
    char name[100];
    int age;
    struct address
    {
        /* data */
        char house_name[200];
        int pincode;
    } address;
} p1;


void print_person(struct person *p)
{
    printf("Name: %s\n", p->name);
    printf("Age: %d\n", p->age);
    printf("Address:\n");
    printf("House: %s\n", p->address.house_name);
    printf("Pincode: %d\n", p->address.pincode);
}



int main(int argc, char const *argv[])
{
    printf("%d-%d-%d\n", today.day, today.month, today.year);  

    struct date dates[3];

    for(int i = 0; i < 3; i++) {
        dates[i].day = i+1;
        dates[i].month = i+2;
        dates[i].year = i+1990;
    }

    for(int i = 0; i < 3; i++) {
        printf("%d-%d-%d\n", dates[i].day, dates[i].month, dates[i].year);  
    }

    strncpy(p1.name, "arnab", 100);
    strncpy(p1.address.house_name, "AhadOpus", 200);
    p1.age = 32;
    p1.address.pincode = 35;

    print_person(&p1);

    return 0;
}


