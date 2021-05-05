// Question number 4

#include<stdio.h>

int main() {
    int num;
    printf("\n Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0){
        printf("\n %d is an even number. \n\n", num);
    } else {
        printf("\n %d is an odd number. \n\n", num);
    }

    return 0;
}