#include<iostream>
using namespace std;

void dec(int n)
{
	if(n==0)
	 return;
	
	cout<<" "<<n; 
	dec(n-1);

}

int main()
{
	int n;
	cout<<"Enter the number to print in decreasing order: ";
	cin>>n;
	dec(n);
	return 0;
}
