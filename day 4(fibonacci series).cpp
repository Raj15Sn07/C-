#include<iostream>
using namespace std;

void fab(int a)
{
	int i,r=0,s=1,t;
	for(i=0;i<=a;i++)
	{
		cout<<r<<" ";
		t=r+s;
		r=s;
		s=t;
	}
}
int main()
{
	int a;
	cout<<"Enter the a number: ";
	cin>>a;
	fab(a);
	return 0;
}
