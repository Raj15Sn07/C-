#include<iostream>
using namespace std;

int main()
{
	int n,t,i,j;
	cout<<"Enter the size of the array: ";
	cin>>n;
	int num[n];
	cout<<"Enter the elements of the array\n";
	for(i=0;i<n;i++)
	 cin>>num[i];
	for(i=0;i<n;i++)
	{
		for(j=i+1;j>0;j--)
		{
			if(num[j]<num[j-1])
			{
				t=num[j];
				num[j]=num[j-1];
				num[j-1]=t;
			}
		}
	}
	cout<<"Sorted array: ";
	for(i=0;i<n;i++)
	 cout<<num[i]<<" ";
	return 0;
}
