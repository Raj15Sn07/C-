#include<iostream>
using namespace std;

int sub(int arr[], int n)
{
	int i,sum=0,t=0;
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
	return t;
}
int main()
{
	int n,i,unwrap,wrap,r=0;
	cout<<"Enter the size of the array: ";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements of the array\n";
	for(i=0;i<n;i++)
	 cin>>arr[i];
	 
	unwrap=sub(arr, n);
	
	for(i=0;i<n;i++)
	{
		r+=arr[i];
		arr[i]=-arr[i];
	}
	
	wrap=r+sub(arr, n);
	
	cout<<max(unwrap,wrap);
	return 0;
}
