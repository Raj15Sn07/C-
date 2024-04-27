#include<iostream>
using namespace std;

int div(int n, int a, int b)
{
	int c1=n/a;
	int c2=n/b;
	int c3=n/(a*b);
	return c1+c2-c3;
}

int main()
{
	int n,a,b;
	cout<<"Enter the range, dividing numbers\n";
	cin>>n>>a>>b;
	int ans=div(n,a,b);
	cout<<ans;
	return 0;
}
