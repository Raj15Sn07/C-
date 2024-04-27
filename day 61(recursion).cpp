#include<iostream>
#include<math.h>
using namespace std;

int pro(int n, int p)
{
	if(p==0)
	 return 1;
	int pr=pro(n,p-1);
	return n*pr;
}
int main()
{
	int n,p;
	cout<<"Enter the number and the power\n";
	cin>>n>>p;
	cout<<"Product of powers="<<pro(n,p);
	return 0;
}
