#include <stdio.h>

int add(int, int);
int sub(int, int);


int main(){

    // function pointer
    int (*func_ptr)(int, int) = 0;

    // array to function pointer 
    int (*func_ptr_[2])(int, int) = {add, sub};

    // addition 
    func_ptr = add;
    printf("%d\n", func_ptr(2,1));

    // substraction 
    func_ptr = sub;
    printf("%d\n", func_ptr(2,1));


    for( int i = 0; i < 2; i++){
        printf("%d\n", func_ptr_[i](2,1));
    }

    return 0;
}


int add(int a , int b){
    return a+b;
}

int sub(int a , int b){
    return a-b;
}
