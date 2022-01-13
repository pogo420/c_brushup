#include <stdio.h>

enum primaryColor{
    RED,
    YELLOW,
    BLUE
};
typedef enum primaryColor color;

int main(int argc, char const *argv[])
{
    /* code */

    float i = 34.89f;
    color c = RED;
    printf("%f-%d\n", i, c);
    return 0;
}
