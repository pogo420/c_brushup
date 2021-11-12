#include<stdio.h>

#define CHECK 9


void f1();


void f1(){
    printf("hello\n");
    return;
}
int val_check = 456;

// to compile: gcc test.c -o test
int main() {

    extern int val_check;

    printf("%d", val_check);

    const int SAM = 10;

    int i;  // declaration 
    i = 32; // initialization

    printf("Hello World %d\n", i);
    printf("%d - %d \n",CHECK, SAM);
    f1();
    return 0;
}
