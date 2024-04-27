#include<iostream>
using namespace std;

int main()
{
	int n,i=0,j=1,s=0;
	cout<<"Enter the size of the array: ";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements of the array\n";
	for(i=0;i<n;i++)
	 cin>>arr[i];
	int m=arr[0];
	cout<<"\n";
	if(arr[0]>arr[1])
		{
			cout<<"Day"<<1<<" ";
		}
	for(i=1;i<n;i++)
	{
		for(j=0;j<i;j++)
			{
				m=max(m,arr[j]);
			}
		if(arr[i]>m && arr[i]>arr[i+1])
		 cout<<"Day"<<i+1<<" ";
	}
	return 0;	
} 
