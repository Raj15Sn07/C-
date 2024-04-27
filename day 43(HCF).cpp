#include<iostream>
using namespace std;

int HCF(int n, int m)
{
	int t=0;
	while(m!=0)
	{
		t=n%m;
		if(t==0)
		 	return m;
		else
		{
			n=m;
			m=t;
		}
		
	}
	return 1;
}
int main()
{
	int n,m;
	cout<<"Enter two number to find their HCF: ";
	cin>>n>>m;
	int ans=HCF(n,m);
	cout<<"HCF="<<ans;
	return 0;
}
