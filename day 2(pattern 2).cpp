#include<iostream>
using namespace std;
int main()
{
	int a,b,i,j;
	cout<<"Enter the numbers of rows\n";
	cin>>a;
	b=a*2;
	for(i=0;i<a;i++)
	{
		for(j=0;j<=b;j++)
		{
			if(j<=0+i || j>=b-i)
			 cout<<"*";
			else
			 cout<<" ";
		}
		cout<<"\n";
	}
	for(i=a;i>=0;i--)
	{
		for(j=0;j<=b;j++)
		{
			if(j<=0+i || j>=b-i)
			 cout<<"*";
			else
			 cout<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
