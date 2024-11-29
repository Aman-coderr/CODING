#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter The values of a,b and c");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("a is the greatest number");
    }
    if(b>a && b>c)
    {
        printf("b is the greatest number");
    }
    if(c>a && c>b)
    {
        printf("c is the gretest number");
    }
    return 0;
}