#include <stdio.h>


void print_array_int(int* a, int n) {
    int i = 0;
    while(i < n) {
        printf("%d-%d\n", i, a[i]);
        i++;
    }
}

void print_array_char(char* a, int n) {
    int i = 0;
    while(i < n) {
        printf("%d-%c\n", i, a[i]);
        i++;
    }
}

void check2Darray() {
    int filter[3][4] = {
        {0, 0, 1, 0},
        {1, 0, 1, 1},
        {1, 1, 0, 0}
    };

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++) {
            printf("%d", filter[i][j]);
            if (j < 3) 
            {printf("-");}
        }
        printf("\n");
    }
}

void vla(){
    const int B = 10;
    int arr[B] = {0, 1, 2, 3};
    for (int i = 0; i < sizeof(arr)/sizeof(int); i++){
        printf("%d\n", arr[i]);
    }
}

void array_initalize() {
    char vowels[5] = {'a', 'e', 'i', 'o', 'u'};
    int v[5] = {1, 3, 5}; // if we dont initialize completely, remaining will be initialized as zero.
    print_array_char(vowels, sizeof(vowels)/sizeof(char));
    print_array_int(v, sizeof(v)/sizeof(int));
}

int main(int argc, char const *argv[]) {
    int N = 10;
    int a[N];

    for (int i = 0; i < N; i++) {
        a[i] = i*3;
    }

    print_array_int(a, sizeof(a)/sizeof(a[0]));

    // array check 
    array_initalize();

    // 2D array
    check2Darray();

    // VLA via constant
    vla();

    return 0;
}
