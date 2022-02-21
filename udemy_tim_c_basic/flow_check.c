#include<stdio.h>

typedef enum coins{C, D, A} coins; 

char* checkAdult(int x){
    if (x > 18){
        return "Adult";
    }
    else{
        return "Kid";
    }
}


int checkSwitch(coins c){
    switch (c)
    {
    case C:
        /* code */
        return 0;
        break;
    case D:
        /* code */
        return 1;
        break;
    case A:
        /* code */
        return 2;
        break;

    default:
        return 3;
        break;
    }
}

void checkForLoop(int x) {
    for(int i = 0;i<x; i++){
        printf("Hello forloop:%d\n", i);
    }
}

int main(int argc, char const *argv[])
{
    printf("check adult: %s\n", checkAdult(34));
    printf("coin %d", checkSwitch(0));
    checkForLoop(10);

    return 0;
}
