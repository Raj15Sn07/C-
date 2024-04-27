#include<iostream>
using namespace std;
int main()
{
	int n,i,r,s;
	cout<<"Enter size of the array: ";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements of the array\n";
	for(i=0;i<n;i++)
 	  cin>>arr[i];
 	r=arr[0];
 	s=arr[0];
 	for(i=1;i<n;i++)
 	{
 		r=max(r,arr[i]);
 		s=min(s,arr[i]);
	}
	cout<<"Highest number="<<r;
	cout<<"\nLowest number="<<s;
	return 0;
}
