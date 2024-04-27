#include<iostream>
using namespace std;

int main()
{
	int arr[]={4,1,2,3,4,3,2,6,2,4,3,1,1},num[]={0,0,0},i;
	
	for(i=0;i<13;i++)
	{
		for(int j=0;j<3;j++)
		{
			if((arr[i] & (1<<j))!=0)
			 num[j]++;
		}
	}
	
	int ans=0;
	
	for(i=0;i<3;i++)
	{
		if(num[i]%3==1)
		 ans=ans+(1<<i);
	}
	
	cout<<ans;
	
	return 0;
}
