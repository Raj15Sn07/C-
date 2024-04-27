#include<iostream>
using namespace std;

int main()
{
	int n,i,j,sum,r;
	cout<<"Enter the size of the array: ";
	cin>>n;
	int num[n];
	cout<<"\nEnter the elements of the array\n";
	for(i=0;i<n;i++)
	 cin>>num[i];
	cout<<"\nEnter the sum you want to find: ";
	cin>>r;
	for(i=0;i<n;i++)
	{
		sum=num[i];
		j=i+1;
		while(j<n-1)
		{
			sum=sum+num[j];
			if(sum==r)
			{
				cout<<i+1<<" "<<j+1<<"\n";
				break;
			}
			j++;
		}
	}
	return 0;
}
