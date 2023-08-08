#include <stdio.h>
void printsymbol(int num, char sy)
{
    int i;
    for (i = 0; i < num; i++)
    {

        printf("%c", sy);
    }
    printf("\n");
}

void main()
{
    int number;
    char symbol;

    printf("Enter symbol : ");
    scanf("%c", &symbol);
    printf("Enter number of symbol ");
    scanf("%d", &number);
    printf("symbol : %c number : %d \n", symbol, number);

    printsymbol(number, symbol);
    printf("name : sahil belim \n");
 
    printsymbol(number, symbol);

    printf("Age : 19 \n");

    printsymbol(number, symbol);
    
    printf("Email : sahil@123gmail.com\n");
    printsymbol(number, symbol);
   
    printf("number : 9924254332\n");
    printsymbol(number, symbol);
   

}