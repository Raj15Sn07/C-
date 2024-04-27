#include<iostream>
using namespace std;
int main()
{
	int a,b,c=0,r,s=0,t;
	cout<<"Enter a number to check armstrong number ";
	cin>>a;
	b=a;
	while(a>0)
	{
		r=a%10;
		s=s+r*r*r;
		a=a/10;
	}
	if(b==s)
	 cout<<"armstrong";
	 
	 else
	  cout<<"not a armstrong";
	return 0;
}
