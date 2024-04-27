#include<iostream>
using namespace std;
int main()
{
	int a,b,i,j;
	cout<<"Enter the numbers of rows and columns ";
	cin>>a>>b;
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=b;j++)
		{
			if(i==1 || i==a)
			  cout<<"*";
			else if(j==1 || j==b)
			  cout<<"*";
			else
			  cout<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
