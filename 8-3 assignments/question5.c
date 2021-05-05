// Write a program in C whose output is the program itself.

#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen(__FILE__, "r");

    char c = fgetc(ptr);

    while (c != EOF)
    {
        putchar(c);
        c = fgetc(ptr);
    }

    fclose(ptr);

    return 0;
}