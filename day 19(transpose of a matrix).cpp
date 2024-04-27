#include<iostream>
using namespace std;

int main()
{
	int n,i,j,t=0;
	cout<<"Enter the size of the square matrix: ";
	cin>>n;
	int arr[n][n];
	cout<<"Enter the elements of the matrix\n";
	for(i=0;i<n;i++)
	 for(j=0;j<n;j++)
	  cin>>arr[i][j];
	cout<<"MARTRIX\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
	  		cout<<arr[i][j];
		cout<<"\n";	
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			t=arr[i][j];
			arr[i][j]=arr[j][i];
			arr[j][i]=t;
		}
	}
	cout<<"TRANSPOSE MARTRIX\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
	  		cout<<arr[i][j];
		cout<<"\n";	
	}
	return 0;
}
