#include<iostream>
using namespace std;

int print(int n)
{
	if(n==0)
	 return n;
	int num=print(n-1)+1;
	cout<<" "<<num;
	return num;
}

int main()
{
	int n,s;
	cout<<"Enter the range to print numbers in increasing order: ";
	cin>>n;
	n-=1;
	s=print(n);
	cout<<" "<<s+1;
	return 0;
}
