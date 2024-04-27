#include<iostream>
using namespace std;

int fact(int a)
{
	int i,s=1;
	for(i=2;i<=a;i++)
	{
		s*=i;
	}
	return s;
}

int main()
{
	int n,r,t;
	cout<<"To calculate nCr, enter the value of-\nn=";
	cin>>n;
	cout<<"r=";
	cin>>r;
	t=fact(n)/(fact(r)*fact(n-r));
	cout<<"nCr="<<t;
}
