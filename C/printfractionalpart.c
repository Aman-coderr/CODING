#include<stdio.h>
int main()
{
    float x,z;
    printf("enter the value of x");
    scanf("%f",&x);
    int y;
    y=x;
    z=x-y;
    printf("Integral part- %d",y);
    printf("\nfractional part- %f",z);
    return 0;
}