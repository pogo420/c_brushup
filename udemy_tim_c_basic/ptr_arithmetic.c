#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[9] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    int* ptr = arr;
    int j = 0;
    while(j < (sizeof(arr)/sizeof(int))) {
        printf("%d\n", *(ptr + j));
        j ++;
    }


    return 0;
}
