#include<stdio.h>

// function declaration
float addition(float, float);
float subtraction(float, float);
float multiplication(float, float);
float division(float, float);

int main(){
    float a, b, result=0.00;
    int option;
    
    // input two numbers
    printf("\n Enter first number: \n");
    scanf("%f", &a);
    printf("\n Enter second number: \n");
    scanf("%f", &b);

    // input operation
    printf("\n Enter 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division \n");
    scanf("%d", &option);

    
    if (option == 1){
        result = addition(a, b);
    } else if (option == 2){
        result = subtraction(a, b);
    } else if (option == 3){
        result = multiplication(a, b);
    } else if (option == 4){
        result = division(a, b);
    }

    printf("\n Answer = %.2f \n", result);

    return 0;
}

// addition function
float addition(float a, float b){
    return a+b;
}

// subtraction function
float subtraction(float a, float b){
    return a-b;
}

// multiplication function
float multiplication(float a, float b){
    return a*b;
}

// division function
float division(float a, float b){
    return a/b;
}

