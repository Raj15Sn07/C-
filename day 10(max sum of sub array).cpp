#include<iostream>
using namespace std;

int main()
{
	int i,j,n,t,sum;
	cout<<"Enter the size of the array: ";
	cin>>n;
	int num[n];
	cout<<"\nEnter the elements of the array\n";
	for(i=0;i<n;i++)
	 cin>>num[i];
	int m=num[0];
	cout<<"\n";
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			sum=0;
			t=i;
			while(t<=j)
			{
				sum+=num[t];
				t++;
			}
			m=max(m,sum);
		}
	}
	cout<<m;
	return 0;
}
