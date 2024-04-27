#include<iostream>
using namespace std;

void prime(int n)
{
	int arr[n+10]={0},i,j;
	
	for(i=2;i<=n;i++)
	{
		for(j=i*i;j<=n;j++)
		{
			if(j%i==0)
			{
				arr[j]++;
			}
		}
	}
	
	for(i=2;i<=n;i++)
	{
		if(arr[i]==0)
		cout<<i<<" ";
	}
}


int main()
{
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	prime(n);
	return 0;
}
