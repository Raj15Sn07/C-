#include<iostream>
using namespace std;

bool find(int arr[], int t, int low, int high)
{
	while(low!=high)
	{
		if(arr[low]+arr[high]>t)
		 high--;
		else if(arr[low]+arr[high]<t)
		 low++;
		else
		{
			cout<<low+1<<" "<<high+1;
			return true;
		}
	}
	return false;
}
int main()
{
	int n,i,low,high,t;
	cout<<"Enter the size of the array: ";
	cin>>n;
	int arr[n];
	cout<<"Enter the array elements\n";
	for(i=0;i<n;i++)
	 cin>>arr[i];
	low=0;
	high=n-1;
	cout<<"Enter the sum to find\n";
	cin>>t;
	if(find(arr, t, low, high)==true)
	 cout<<" Number is found";
	else
	 cout<<" Number is not found";
	return 0;
}
