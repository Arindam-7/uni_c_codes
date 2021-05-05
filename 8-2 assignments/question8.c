// Write a program to print all the ASCII values 
// and their equivalent characters using a while loop. 
// The ASCII values vary from 0 to 255.

#include<stdio.h>

int main() {
    int ascii = 0;
    char character;

    while (ascii <= 255)
    {
        character = ascii;

        printf("\n ASCII value of %c is %d \n", character, ascii);

        ascii++;
    }

    return 0;
    
}