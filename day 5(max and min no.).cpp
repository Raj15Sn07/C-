#include<iostream>
using namespace std;
int main()
{
	int n,i,r;
	cout<<"Enter size of the array: ";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements of the array\n";
	for(i=0;i<n;i++)
 	  cin>>arr[i];
 	r=arr[0];
 	for(i=1;i<n;i++)
 	{
 		if(r<arr[i])
 		 r=arr[i];
	}
	cout<<"Highest number="<<r;
	r=arr[0];
 	for(i=1;i<n;i++)
 	{
 		if(r>arr[i])
 		 r=arr[i];
	}
	cout<<"\nLowest number="<<r;
	return 0;
}
