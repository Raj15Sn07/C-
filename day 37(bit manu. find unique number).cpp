#include<iostream>
using namespace std;

int main()
{
	int arr[]={1,2,3,4,2,3,1},i,sum=0;
	for(i=0;i<7;i++)
	 sum=sum^arr[i];
	cout<<sum;
	return 0;
}
