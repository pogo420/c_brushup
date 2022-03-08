#include <stdio.h>

void getInputNum(void){
    int inp;
    printf("Enter a number:");
    scanf("%d", &inp);
    printf("Number entered: %d", inp);
}

typedef enum status {SUCCESS, FAIL} status;

status checkPtr(void* ptr){
    if(!ptr){
        return SUCCESS;
    }
    else{
        return FAIL;
    }
}

int main(int argc, char const *argv[])
{
    int number = 90;
    int* pnumber = &number;

    printf("Address number:  %p\n", &number);
    printf("Address pnumber: %p\n", pnumber);
    printf("Pointer space %lu bytes\n", sizeof(pnumber));
    // getInputNum();

    int* p;
    int* q = NULL;
    printf("%d\n", checkPtr((void*)p));
    printf("%d\n", checkPtr((void*)q));
    return 0;
}
