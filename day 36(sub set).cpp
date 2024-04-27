#include<iostream>
using namespace std;

int main()
{
	int i,j,s;
	cout<<"Enter the size of the array ";
	cin>>s;
	int arr[s];
	cout<<"Enter the elements of the array\n";
	for(i=0;i<s;i++)
	 cin>>arr[i];
	
	for(i=0;i<(1<<s);i++)
	{
		for(j=0;j<s;j++)
		{
			if(i & (1<<j))
			 cout<<arr[j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
