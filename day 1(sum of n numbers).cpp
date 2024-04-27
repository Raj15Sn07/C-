#include<iostream>
using namespace std;
int main()
{
	int n,s=0;
	cout<<"Enter a number\n";
	cin>>n;
	int i;
	for(i=1;i<=n;i++)
	 s=s+i;
	cout<<"The sum of n numbers is "<<s;
	return 0;
}
