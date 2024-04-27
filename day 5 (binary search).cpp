#include<iostream>
using namespace std;

int find(int arr[],int n,int f)
{
	int mid,s=0,e=n;
	while(s<=e)
	{
		mid=(s+e)/2;
		if(arr[mid]=f)
		 return mid;
		else if(f<arr[mid])
		 e=mid-1;
		else
		 s=mid+1;
	}
	return -1;
}
int main()
{
	int n,f,c;
	cout<<"Enter the size of the array: ";
	cin>>n;
	int arr[n];
	for(int i;i<n;i++)
	 cin>>arr[i];
	cout<<"Enter the number to find: ";
	cin>>f;
	c=find(arr,n,f);
	cout<<c;
	return 0;
}
