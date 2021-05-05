// An 8 bit unsigned character is used to store the gender (bit no. 7), year of study (bit nos. 6 and 5) and age of a student (bit nos. 4 to 0), where bit no. 7 is the MSB. Write a C function which accepts an 8 bit unsigned character value and prints the gender, year of study and age of a student. 

#include<stdio.h>
#include<math.h>

void print(unsigned char s)
{ 
    unsigned char g= s & 128;
    unsigned char gend= g >> 7;
    if(gend==1){
        printf("Female");
    }
    else{
        printf("Male");
    } 
    
    unsigned char yr= s & 96;
    unsigned char year= (yr >> 5) ;
    printf("\nyear= %u",year);  
    
    unsigned char age= s & 31;
    printf("\n age= %u", age);

}


int main()
{ 
 unsigned char str;
 
 printf("Enter the 8 bit character as decimal: ");
 scanf("%u",&str);
  
 print(str);

 return 0;
}

