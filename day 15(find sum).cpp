#include<iostream>
using namespace std;

bool find(int num[], int n, int t)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(num[i]+num[j]==t)
			{
				cout<<i<<" "<<j;
				return true;
			}
		}
	}
	return false;
}
int main()
{
	int i,n,t;
	cout<<"Enter the size of the array: ";
	cin>>n;
	int num[n];
	cout<<"Enter the elements of the array\n";
	for(i=0;i<n;i++)
	 cin>>num[i];
	cout<<"Enter the sum of two elements: ";
	cin>>t;
	if(find(num, n, t)==true)
	 cout<<" Number is found";
	else
	 cout<<" Number is not found";
	return 0;
}
