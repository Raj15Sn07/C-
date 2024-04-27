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
	int n;
	
	cout<<"Enter the size of the array: ";
	cin>>n;
	
	int arr[n];
	
	cout<<"Enter the elements of the array: \n";
	
	for(int i=0;i<n;i++)
	 cin>>arr[i];
	 
	int low=0,mid=0,high=n-1;
	 
	while(mid <= high)
	{
		if(arr[mid]==0)
		{
			swap(arr,low,mid);
			low++;
			mid++;
		}
		
		else if(arr[mid]==1)
		{
			mid++;
		}
		
		else
		{
			swap(arr,mid,high);
			high--;
		}
	}
	
	for(int i=0;i<n;i++)
	 cout<<arr[i]<<" ";
	
	return 0;
}
