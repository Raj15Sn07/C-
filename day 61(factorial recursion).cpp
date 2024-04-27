#include<iostream>
#include<math.h>
using namespace std;

int fact(int n)
{
	if(n==1)
	 return 1;
	 
	int f=fact(n-1);
	return n*f;
}

int main()
{
	int n;
	cout<<"Enter a number to find it`s factorial: ";
	cin>>n;
	cout<<"\nFactorial of "<<n<<"="<<fact(n)<<"\n";
	return 0;
}
