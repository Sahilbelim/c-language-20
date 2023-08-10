#include<stdio.h>
int Add(int num1,int num2)
{
    int add = num1 + num2;
    return add;
}
int Sub(int number1,int number2)
{
    int sub = number1 - number2;
    int sub = number1 - number2;
    return sub;
}
void  main()
{

    int number1, number2,ans;

    printf("Enter number 1 ");
    scanf("%d", &number1);
    printf("Enter number 2 " );
    scanf("%d", &number2);
    ans = Add(number1, number2);
    printf("Addition is %d \n", ans);
     ans= Sub(number1, number2);
     printf("Subtraction is %d \n", ans);
}