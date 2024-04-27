#include<iostream>
using namespace std;

int getBit(int m, int n)
{
	return ((m & (1<<n))!=0);
}

int main()
{
	int arr[]={1,2,3,4,6,3,2,4,9,1},i,sum=0;
	for(i=0;i<10;i++)
	{
		sum=sum^arr[i];
	}
	
	int getbit=0,pos=0,temp=sum;
	
	while(getbit!=1)
	{
		getbit=sum & 1;
		pos++;
		sum=sum>>1;
	}
	
	int sum2;
	
	for(i=0;i<10;i++)
	{
		if(getBit(arr[i],pos-1))
		 sum2=sum2^arr[i];
	}
	
	cout<<sum2<<" "<<(sum2 ^ temp);
	return 0;
}
