#include<stdio.h>
struct student 
{
    char name[20];
    float weight;
    int age;
}s1,s2,s3;
void main()
{

  
    printf("Enter name : ");
    scanf("%s", &s1.name);
    printf("Enter weight : ");
    scanf("%f", &s1.weight);
    printf("Enter age : ");
    scanf("%d", &s1.age);
    printf("Enter name : ");
    scanf("%s", &s2.name);
    printf("Enter weight : ");
    scanf("%f", &s2.weight);
    printf("Enter age : ");
    scanf("%d", &s2.age);

    printf("Name   : %s \n", s1.name);
    printf("Weight : %.2f \n", s1.weight);
    printf("Age    : %d \n", s1.age);
    printf("Name   : %s \n", s2.name);
    printf("Weight : %.2f \n", s2.weight);
    printf("Age    : %d \n", s2.age);
}
