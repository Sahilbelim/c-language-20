#include<stdio.h>
void Add(int number1,int number2)
{
    int add = number1 + number2;
    printf("Addition is %d \n", add);
}
void Sub(int num1 ,int num2)
{
    int sub = num1 - num2;
    printf("Subtraction is %d \n", sub);
}
void main()
{
    int num1, num2;

    printf("Emter number 1 ");
    scanf("%d",&num1);
    printf("Enter number 2 ");
    scanf("%d",&num2);

    printf("Number 1 is %d \n", num1);
    printf("Number 2 is %d \n", num2);
    Add(num1,num2);
    Sub(num1, num2);
}