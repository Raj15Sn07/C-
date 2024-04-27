#include<iostream>
using namespace std;
int main()
{
	int i,n;
	cout<<"Enter a number to check it is prime or not\n";
	cin>>n;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		 break;
	}
	if(i==n)
	 cout<<n<<" is a prime number";
	else
	 cout<<n<<" is not a prime number";
	return 0;
}
