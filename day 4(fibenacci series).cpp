#include<iostream>
using namespace std;

void fab(int a)
{
	int i,s=0;
	for(i=0;i<=a;i++)
	{
		s+=i;
		cout<<s<<" ";
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
