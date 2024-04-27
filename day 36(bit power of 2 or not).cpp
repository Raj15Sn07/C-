#include<iostream>
using namespace std;

int main()
{
	int n,s;
	cout<<"Enter a number to check whether it is in power of 2 or not ";
	cin>>n;
	s=n-1;
	if((n & n-1)==0)
	 cout<<"Yes";
	else 
	 cout<<"No";
	return 0;
}
