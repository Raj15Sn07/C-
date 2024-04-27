#include<iostream>
using namespace std;

int main()
{
	int n,i;
	cout<<"Enter the size of the array: ";
	cin>>n;
	int num[n];
	bool the[n];
	for(i=0;i<n;i++)
	 the[i]=false;
	cout<<"\nEnter the elements of the array\n";
	for(i=0;i<n;i++)
	 cin>>num[i];
	for(i=0;i<n;i++)
	{
		if(num[i]>=0)
		{
			the[num[i]]=true;
		}
	}
	for(i=0;i<n;i++)
	{
		if(the[i]==false)
		 break;
	}
	cout<<"\nThe smallest missing positive number is: "<<i;
	return 0;
}
