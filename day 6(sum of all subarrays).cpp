#include<iostream>
using namespace std;

int main()
{
	int n,i,j,sum=0;
	cout<<"Enter the size of the array: ";
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	 cin>>arr[i];
	for(i=0;i<n;i++)
	 for(j=i;j<n;j++)
	 {
	 	sum=sum+arr[j];
	 	cout<<sum<<" ";
	 }
	return 0;
}
