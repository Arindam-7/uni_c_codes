#include <stdio.h>
struct student
{
    int roll;
    char name[30];
    char dept[50];
    char course[50];
    int yr;
};

struct student st[100];

void printA(int,int);
void printB(int,int);
int main()
{
    int i,year,n,r;
    printf("enter number of students \n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the name and roll number of student %d\n",(i+1));
        scanf("%s",st[i].name);
        scanf("%d",&st[i].roll);
    }
    for(i=0;i<n;i++)
    {
        printf("enter the department,course and year of joining of student %d\n",(i+1));
        scanf("%s",st[i].dept);
        scanf("%s",st[i].course);
        scanf("%d",&st[i].yr);
    }
    printf("enter the year whose data is to be printed \n");
    scanf("%d",&year);
    printA(year,n);
    printf("enter the roll number of particular student \n");
    scanf("%d",&r);
    printB(r,n);
    return 0;
}
void printA(int y,int n)
{
    int i;
    printf("the details of students who had joined in the year %d are:\n",y);
    for(i=0;i<n;i++)
    {
        if(y==st[i].yr)
        {
        printf("name of student : %s\n",st[i].name);
        printf("roll number : %d\n",st[i].roll);
        printf("department : %s and course : %s\n",st[i].dept,st[i].course);
        }
        else
        continue;
    }
}
void printB(int r,int n)
{
    int i;
    printf("the details of student with roll number %d are:\n",r);
    for(i=0;i<=n;i++)
    {
        if(st[i].roll == r)
        {
            printf("Name of student : %s\n",st[i].name);
            printf("department : %s and course : %s\n",st[i].dept,st[i].course);
            printf("year of joining : %d\n",st[i].yr);
        }
    }
}    
        
