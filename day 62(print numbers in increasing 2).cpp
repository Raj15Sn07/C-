#include<iostream>
using namespace std;

void inc(int n)
{
	if(n==0)
	 return;

	inc(n-1);
	cout<<" "<<n; 
}

int main()
{
	int n;
	cout<<"Enter the number to print in decreasing order: ";
	cin>>n;
	inc(n);
	return 0;
}
