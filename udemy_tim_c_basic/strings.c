#include <stdio.h>
#include <string.h>

#define CHECK_STR "Kolo32\n"

int main(int argc, char const *argv[])
{
    char str[] = "hello"; // best practice 
    char str2[6] = "hello"; // one additional for null character \0
    char str3[6] = {'h', 'e', 'l', 'l', 'o', '\n'};
    char str4[10];

    printf("%s\n",str);
    printf("%s\n",str2);
    printf("%s\n",str3);
    printf(CHECK_STR);

    printf("str compare:%d\n", strcmp(str, "str2"));
    printf("str length:%lu\n", strlen(str));
    
    strncpy(str4, str, sizeof(str4));  // specifying the bytes prevents buffer overflow
    printf("str :%s\n", str4);

    return 0;
}
