#include<iostream>
using namespace std;

bool check(int arr[], int n)
{
	if(n==1)
	 return 1;
	 
	else if(arr[n-1]>arr[n-2])
	 check(arr,n-1);
	
	else
	 return 0;
}

int main()
{
	int num;
	cout<<"Enter the size of the array: ";
	cin>>num;
	int arr[num];
	cout<<"\nEnter the elements of the array\n";
	for(int i=0;i<num;i++)
	 cin>>arr[i];
	if(check(arr,num)==1)
	 cout<<"Sorted Array.";
	else
	 cout<<"Unsorted Array.";
	return 0;
}
