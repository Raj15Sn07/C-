#include<iostream>
using namespace std;

int fact(int a)
{
	int i,s=1;
	for(i=2;i<=a;i++)
	  s*=i;
	return s;
}

void com(int a)
{
	int s,i,j;
	for(i=0;i<=a;i++)
	{
		for(j=0;j<=i;j++)
		{
			s=fact(i)/(fact(j)*fact(i-j));
			cout<<s<<" ";
		}
		cout<<"\n";
	}
}
int main()
{
	int a;
	cout<<"Enter the number of rows: ";
	cin>>a;
	com(a);
	return 0;
}
