#include<iostream>
using namespace std;

int main()
{
	int n,i,sum=0,t=0;
	cout<<"Enter the size of the array: ";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements of the array\n";
	for(i=0;i<n;i++)
	 cin>>arr[i];
	for(i=0;i<n;i++)
	{
		sum+=arr[i];
		if(sum>0)
		{
			t=max(t,sum);
		}
		else
		{
			sum=0;
		}
	}
	cout<<"Greatest sum of sub-array"<<t;
	return 0;
}
