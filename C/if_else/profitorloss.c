#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Input The Cost Price of Item");
    scanf("%d",&x);
    printf("Input the Selling Price of Item");
    scanf("%d",&y);
    if(x>y)
    {
        z=x-y;
        printf("Loss= %d",z);
    }
    if(y>x)
    {
        z=y-x;
        printf("Profit= %d",z);
    }
    if(x==y)
    {
        printf("Neither Profit Nor Loss");
    }
    return 0;
}