#include<stdio.h>

int main(){
    int a;
    printf("\n Enter a number: \n");
    scanf("%d", &a);

    if (a%2 == 0) {
        printf("\n %d is prime.", a);
    } else {
        printf("\n %d is not prime.", a);
    }
    
    return 0;
}