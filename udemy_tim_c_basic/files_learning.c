# include<stdio.h>

FILE* writeFile(char* fileName) {
    FILE* fptr = fopen(fileName, "w+");
    if (fptr == NULL) {
        printf("Not able to write file!");
        return NULL;
    }
    else {
        return fptr;
    }
}


FILE* readFile(char* fileName) {
    FILE* fptr = fopen(fileName, "r+");
    if (fptr == NULL) {
        printf("Not able to write file!");
        return NULL;
    }
    else {
        return fptr;
    }
}


int main(int argc, char const *argv[])
{
    char* fname = "test_check.txt";
    FILE* fptr = writeFile(fname);
    
    // fputc('c', fptr);
    fputs("hello bro\nhow are you?\nlets grap a coffee!!", fptr);
    fclose(fptr);
    fptr = NULL;
    // printf("using fgetc\n");
    // char c = '\0'; 
    // do
    // {
    //     c = fgetc(fptr);
    //     if (c!= EOF){
    //         printf("%c", c);
    //         }
    // } while (c != EOF); // end of file check 
    
    FILE* fptr1 = readFile(fname);
    printf("using fgets\n");
    char str[100]; 
    while(fgets(str, 100, fptr1) != NULL) {
        printf("Line: %ld-%s", ftell(fptr1), str);
    }
        
    fclose(fptr1); // ptr - physical file connection is broken , its thread safe. 
    fptr1 = NULL;
    return 0;
}
