#include<stdio.h>

    struct address
    {
        int phone;
        int pin;
    };
    struct emp
    {
        char name[25];
        struct address a;
    };
    struct arr
    {
        struct emp e;
    }ar[2];

int main(){
    for(int i=0; i<2; i++){
        printf("Name, phone, pin = \n");
        scanf("%s %d %d", ar[i].e.name, &ar[i].e.a.phone, &ar[i].e.a.pin);
    }

    for(int j=0; j<2; j++){
        printf("Name = %s Phone = %d\n", ar[j].e.name, ar[j].e.a.phone);
        printf("\n Pin = %d", ar[j].e.a.pin);
    }
    
}

