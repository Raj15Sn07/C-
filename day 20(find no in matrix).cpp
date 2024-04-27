#include<iostream>
using namespace std;


int main()
{
	int i,j,n,m,t,r=0,c;
	bool flag=false;
	cout<<"Enter the dimentions of the matrix\n";
	cin>>n>>m;
	int num[n][m];
	c=m-1;
	cout<<"Enter elements of the sorted matrix\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>num[i][j];
		}
	}
	cout<<"Enter the number to find in the matrix";
	cin>>t;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(num[r][c]==t)
			 flag=true;
			else if(num[r][c]>t)
			 c--;
			else
			 r++;
		}
	}
	if(flag==true)
	 cout<<"Number is found.";
	else
	 cout<<"Number is not found.";
	return 0;
}
