#include <stdio.h>

int main()
{
    /* code */
    char inp[10];
    int i;
    scanf("%d,%s",&i, inp);
    // scanf("%s", &inp[0]); // Also work
    printf("%s-%s-%d\n", "Hello Gorillaz", inp, i);
    return 0;
}
