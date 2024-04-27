#include<iostream>
using namespace std;

int fact(int a)
{
	int i,s=1;
	for(i=1;i<=a;i++)
	{
		s*=i;
	}
	return s;
}

int main()
{
	int a,r;
	cout<<"Enter a number: ";
	cin>>a;
	r=fact(a);
	cout<<"\nFactorial is: "<<r;
	return 0;
}
