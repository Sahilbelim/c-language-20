#include<stdio.h>
int Fact(int num)
{
    int fact;
    if(num==1)
    {
        return 1;
    }
    else
    {
        fact = num * Fact(num-1);
        return fact;
    }                   
}
void main()
{
    int fact,number;

    printf("Enter number : ");
    scanf("%d", &number);
   fact= Fact(number);
   printf("fact : %d  ", fact);
}