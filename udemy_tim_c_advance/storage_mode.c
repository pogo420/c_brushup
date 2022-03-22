#include <stdio.h>

int func_static(void) {
    static int i = 0;
    i ++;
    return i;
}


int main(int argc, char const *argv[])
{
    printf("%d\n", func_static());
    printf("%d\n", func_static());
    return 0;
}
