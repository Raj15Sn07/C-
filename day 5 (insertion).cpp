#include<iostream>
using namespace std;

int main()
{
	int i,j,n,t;
	cout<<"Enter the size of the array: ";
	cin>>n;
	int num[n];
	cout<<"Enter the elements of the array\n";
	for(i;i<n;i++)
	 cin>>num[i];
	for(i=0;i<n-1;i++)
	{
		for(j=i;j<n;j++)
		{
			if(num[i]>num[j])
			{
				t=num[i];
				num[i]=num[j];
				num[j]=t;
			}
		}
	}
	cout<<"Sorted array is: ";
	for(i=0;i<n;i++)
	 cout<<num[i]<<" ";
	return 0;
}
