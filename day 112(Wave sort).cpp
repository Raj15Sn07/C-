#include<iostream>
using namespace std;

void swap(int arr[], int a, int b)
{
	int t=arr[a];
	arr[a]=arr[b];
	arr[b]=t;
	return;
}

int main()
{
	int n,i=1;
	
	cout<<"Enter the size of the array: ";
	cin>>n;
	
	int arr[n];
	
	cout<<"Enter the elements of the array: \n";
	
	for(i=0;i<n;i++)
	 cin>>arr[i];
	 
	i=1;
	
	while(i<n)
	{
		if(arr[i]>arr[i-1])
		{
			swap(arr,i,i-1);
		}
		
		if(arr[i]>arr[i+1] && i<n-1)
		{
			swap(arr,i,i+1);
		}
		
		i+=2;
	}
	 
	for(i=0;i<n;i++)
	 cout<<arr[i]<<" "; 
	
	return 0;
}
