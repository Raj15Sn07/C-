#include<iostream>
using namespace std;

int main()
{
	int n,i=0;
	cout<<"Enter a number to count ones in it`s binary ";
	cin>>n;
	while(n!=0)
	{
		n=(n & (n-1));
		i++;
	}
	cout<<"Number of ones is "<<i;
	return 0;
}
