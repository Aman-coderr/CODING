#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Input the values of Dividend and Divisor");
    scanf("%d %d",&a,&b);
    c=a/b;
    d=a-(b*c);
    printf("remainder=%d",d);
    return 0;

}