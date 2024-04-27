#include<iostream>
using namespace std;

int main()
{
	int n,i,j;
	cout<<"Enter a number: ";
	cin>>n;
	int arr[n+5];
	
	for(i=2;i<=n;i++)
	{
		arr[i]=i;
	}
	
	for(i=2;i<=n;i++)
	{
		if(arr[i]==i)
		{
			for(j=i*i;j<=n;j+=i)
			{
				if(arr[j]==j)
				arr[j]=i;
			}
		}
	}
	
	while(n!=1)
	{
		cout<<arr[n];
		n=n/arr[n];
		if(n==1)
		 continue;
		cout<<"X";
	}
	
	return 0;
}
