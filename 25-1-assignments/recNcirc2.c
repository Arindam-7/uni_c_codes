/* Question 6:- The length and breadth of a rectangle are input 
through the keyboard. Write a programme to determine 
(i) radius of a circle and ratio of perimeters of the rectangle and 
the circle if the areas of the rectangle and the circle are equal 
(ii) radius of the circle and the ratio of the areas of the rectangle 
and the circle if the perimeters of the rectangle and the circle are equal. */

// answer of number 6(ii)

#include<stdio.h>

int main(){
    float length, breadth;
    float areaRec, areaCirc, pi=3.14, radius, perimeterRec;
    printf("\n Enter the length of rectangle: \n");
    scanf("%f", &length);
    printf("\n Enter the breadth of rectangle: \n");
    scanf("%f", &breadth);

    // calculation 
    perimeterRec = 2*(length+breadth);
    areaRec = length*breadth;
    radius = (perimeterRec * 2)/pi;
    areaCirc = pi * (radius * radius);

    printf("\n Radius of circle: %.2f \n", radius);
    printf("\n Ratio of areas of Rectangle & Circle: %.2f \n", (areaRec/areaCirc));

    return 0;
}