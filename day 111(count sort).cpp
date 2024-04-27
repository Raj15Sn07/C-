#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter the size of the array: ";
	cin>>n;
	int arr[n],num[n]={0},ans[n]={0};
	cout<<"Enter the elements of the array\n";
	
	for(int i=0;i<n;i++)
	 cin>>arr[i];
	 
	int t=arr[0];
	
	for(int i=1;i<n;i++)
	 t=max(t,arr[i]);
	 
//	int num[t+1];			//dynamically allocation is not possible  //isiliye n size ka bana lenge
	
	for(int i=0;i<n;i++)
	 num[arr[i]]+=1;
	 
	for(int i=1;i<=t;i++)
	 num[i]=num[i]+num[i-1];
	
	for(int i=n;i>=0;i--)
	{
		num[arr[i]]--;
		ans[num[arr[i]]]=arr[i];
	}
	
	for(int i=0;i<n;i++)
	 cout<<ans[i]<<" ";
	return 0;
}
