#include<iostream>
using namespace std;

int main()
{
	int i,j,n,t;
	cout<<"Enter the size of the array: ";
	cin>>n;
	int num[n];
	cout<<"\nEnter the elements of the array\n";
	for(i=0;i<n;i++)
	 cin>>num[i];
	 cout<<"\n";
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			t=i;
			while(t<=j)
			{
				cout<<num[t];
				if(t<j)
				cout<<",";
				t++;
			}
			cout<<"\n";
		}
	}
	return 0;
}
