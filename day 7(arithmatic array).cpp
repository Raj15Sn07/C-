#include<iostream>
using namespace std;

int main()
{
int n,i,t=0,ans=2;
cout<<"Enter the size of the array: ";
cin>>n;
int arr[n];
cout<<"Enter the elements of the array\n";
for(i=0;i<n;i++)
cin>>arr[i];
for(i=0;i<n-1;i++)
{
if(arr[i+1]-arr[i]==arr[i+2]-arr[i+1])
{
ans++;
t=max(t,ans);
}

else
ans=2;

}
cout<<"\n"<<t;
return 0;
}
