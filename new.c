#include<stdio.h>
#include<stdlib.h>

int convert(char s[]){
    int num=0, i=0, l;
    while(s[i]!= '\0'){
        num = num *10 + (s[i] - 48); 
        i++;
    }

    return num;
}

int main() {
    char s[20];
    int n;
    printf("\n Enter a number as string: ");
    scanf("%s", s);
    n = convert(s);
    printf("\n %d", n);

    return 0;
}