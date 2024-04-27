#include<iostream>
using namespace std;
int main()
{
	int i,m,n;
	cout<<"Enter the size of the array: ";
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	 cin>>arr[i];
	m=arr[0];
	cout<<"\n"<<m<<"\n";
	for(i=1;i<n;i++)
	{
		m=max(m,arr[i]);
		cout<<m<<"\n";
	}
	return 0;
}
