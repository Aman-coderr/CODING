#include<iostream>
using namespace std;
int main ()
{
    int a,b,c;
    cout<<" Enter the numbers";
    cin>>a>>b>>c;
    if(a>c)
    {
        if(a>b)
        cout<<a<<" is the greatest";
        else
        cout<<b<<" is the greatest";  
    }
    if(c>a)
    {
        if(c>b)
        cout<<c<<" is the greatest";
        else
        cout<<b<<" is the greatest";
    }





}