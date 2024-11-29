#include<iostream>
using namespace std;
int main()
{
int a,n,d;
cout<<"Enter the value of first term";
cin>>a;
cout<<"Enter the common differnce";
cin>>d;
cout<<"Enter the last term";
cin>>n;
for(int i=a;i<=n;i=i+d)
{
    cout<<i<<endl;
}
}