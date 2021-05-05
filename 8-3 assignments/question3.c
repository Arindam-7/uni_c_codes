//  Write a program in C to create and store information in a text file.

#include<stdio.h>

int main(){
    FILE *ptr;
    char str[50] = "Some random texts to fill the empty text file.";
    ptr = fopen("first.txt", "w");
    if (ptr == NULL){
        printf("\n This file does not exist.");
    } 
    else {
        fprintf(ptr, "%s", str);
        fclose(ptr);
    }
    
    return 0;
}