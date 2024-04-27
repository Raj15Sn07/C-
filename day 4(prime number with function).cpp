#include<iostream>
using namespace std;

void prime(int a, int b)
{
	int i,j;
	for(i=a;i<=b;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			 break;
		}
		if(j==i)
		 cout<<i<<" ";
	}
}
int main()
{
	int a,b,r,s;
	cout<<"Enter the range of prime numbers\n";
	cin>>a>>b;
	prime(a,b);
	cout<<"\nEnter another range\n";
	cin>>r>>s;
	prime(r,s);
	return 0;
}
