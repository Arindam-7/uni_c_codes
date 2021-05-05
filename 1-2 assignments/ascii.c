// Question 5 - Any character is entered through the keyboard, 
// write a program to determine whether the character entered is a capital letter,
//  a small case letter, a digit or a special symbol.

#include<stdio.h>

int main() {
    int ascii;
    char character;
    printf("\n Enter any character: \n");
    scanf("%c", &character);

    ascii = character; // storing the ascii value in integer variable

    // calculation
    // capital letters (65-90), small letters (97-122), digits (48-57)
    if (ascii >=65 && ascii <= 90) {
        printf("\n %c is a Capital Letter. \n", character);
    } else if (ascii >= 97 && ascii <= 122) {
        printf("\n %c is a Small Letter. \n", character);
    } else if (ascii >= 48 && ascii <= 57) {
        printf("\n %c is a Digit. \n", character);
    } else if (ascii >= 32 && ascii <=47 || ascii >=58 && ascii <= 64 || ascii >=91 && ascii <=96 || ascii >= 123 && ascii <= 127){
        printf("\n %c is a Special Symbol. \n", character);
    }

    return 0;
}