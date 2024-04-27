#include<iostream>
#include<math.h>
using namespace std;

int dec(int a)
{
	int t,n,i,r=0,s=0;
	n=a;
	while(n!=0)
	{
		n/=10;
		r++;
	}
	for(i=0;i<r;i++)
	{
		t=a%10;
		s=s+(t*pow(8,i));
		a/=10;
	}
	return s;
}
int main()
{
	int a,r;
	cout<<"Enter the octal number: ";
	cin>>a;
	r=dec(a);
	cout<<"\nDecimal number is: "<<r;
	return 0;
}
