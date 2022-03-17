# include <stdio.h>

struct date
{
    /* data */
    int day;
    int month;
    int year;
};

struct date today = {2, 4, 1990}; // initialization 



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


    return 0;
}


