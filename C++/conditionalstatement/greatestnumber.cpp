#include<iostream>
using namespace std;
int main()
{
int a,b,c,d;
cout<<"Enter numbers";
cin>>a>>b>>c>>d;
if(a>b && a>c && a>d)
cout<<a<<" is the greatest";
if(b>a && b>c && b>d)
cout<<b<<" is the greatest";
if(c>a && c>b && c>d)
cout<<c<<" is the greatest";
if(d>a && d>b && d>c)
cout<<d<<" is the greatest";

}