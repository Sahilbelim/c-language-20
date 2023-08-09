#include<stdio.h>
float getpi()
{
    float pi = 3.14159;
    return pi;
}
void main()
{
    float r, pi,area;
    pi = getpi() ;
    printf("%f\n", pi);
    printf("Enter radius of circle ");
    scanf("%f", &r);
    area = pi  *(r * r);

    printf("Area of circle is %.2f ", area);

}