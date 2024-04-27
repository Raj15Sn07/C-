#include<iostream>
using namespace std;
int main()
{
	int a,i=0,n,r=0,s;
	cout<<"Enter a number\n";
	cin>>a;
	n=a;
	while(n!=0)
	{
		n/=10;
		i++;
	}
	int d=1;
	for(int j=1;j<i;j++)
	 d*=10;
	n=a;
	while(n!=0)
	{
		s=n%10;
		s*=d;
		r+=s;
		n/=10;
		d/=10;
	}
	cout<<r;
	return 0;
}
