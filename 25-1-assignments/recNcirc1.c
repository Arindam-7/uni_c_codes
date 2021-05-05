/* Question 6:- The length and breadth of a rectangle are input 
through the keyboard. Write a programme to determine 
(i) radius of a circle and ratio of perimeters of the rectangle and 
the circle if the areas of the rectangle and the circle are equal 
(ii) radius of the circle and the ratio of the areas of the rectangle 
and the circle if the perimeters of the rectangle and the circle are equal. */

// answer of number 6(i)

#include<stdio.h>
#include<math.h>

int main(){
    float length, breadth;
    float area, pi=3.14, radius, perimeterCirc, perimeterRec;
    printf("\n Enter the length of rectangle: \n");
    scanf("%f", &length);
    printf("\n Enter the breadth of rectangle: \n");
    scanf("%f", &breadth);

    // calculation
    perimeterRec = 2*(length+breadth);
    area = length*breadth;
    radius = sqrt(area/pi);
    perimeterCirc = (pi/2)*radius;

    printf("\n Radius of circle: %.2f \n", radius);
    printf("\n Ratio of perimeters of Rectangle & Circle: %.2f \n", (perimeterRec/perimeterCirc));

    return 0;
}