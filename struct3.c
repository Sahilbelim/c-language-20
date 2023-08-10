#include<stdio.h>
struct student 
{
    char name[20];
    float weight;
    int age;
}s[5];
void main()
{
    int i = 5;
    for (i = 0; i < 5;i++)
    {
        printf("Enter name : ");
        scanf("%s", &s[i].name);
        printf("Enter weight : ");
        scanf("%f", &s[i].weight);
        printf("Enter age : ");
        scanf("%d", &s[i].age);
    }

    for (i = 0; i < 5;i++)
    {
        printf("Name   : %s \n", s[i].name);
        printf("Weight : %.2f \n", s[i].weight);
        printf("Age    : %d \n", s[i].age);
    }
}
