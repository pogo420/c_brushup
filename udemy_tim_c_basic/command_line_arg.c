# include<stdio.h>
int main(int argc, char const* argv[])
{
    /* code */
    printf("there are %d paramaters\n", argc);

    for(int i =0; i< argc; i++){
        printf("%s\n", argv[i]); // for string just provide the char* variable
    }
    return 0;
}
