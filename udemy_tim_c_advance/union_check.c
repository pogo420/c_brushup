# include <stdio.h>

    typedef union t {
        int a;
        float b;
        char c;
    } t;


void printUnion(t t){
    printf("member a:%d\n", t.a);
    printf("member b:%f\n", t.b);
    printf("member c:%c\n", t.c);

}

int main(int argc, char const *argv[])
{

    t ch1, ch2, ch3;

    ch1.a = 56;
    printUnion(ch1);

    ch2.b = 34.89;
    printUnion(ch2);

    ch3.c = 'p';
    printUnion(ch3);

    return 0;
}
