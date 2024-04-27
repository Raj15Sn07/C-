#include<iostream>
using namespace std;

int main()
{
	int i,j,k,n1,m1,n2,m2,sum;
	cout<<"Enter the row and column of the first matrix\n";
	cin>>n1>>m1;
	cout<<"Enter the row and column of the second matrix\n";
	cin>>n2>>m2;
	int num1[n1][m1],num2[n2][m2];
	if(m1!=n2)
	{
		cout<<"Matrix of these dimentions can't be multiplied.";
		return 0;
	}
	cout<<"Enter the elements of the first matrix\n";
	for(i=0;i<n1;i++)
	 for(j=0;j<m1;j++)
	  cin>>num1[i][j];
	cout<<"Enter the elements of the second matrix\n";
	for(i=0;i<n2;i++)
	 for(j=0;j<m2;j++)
	  cin>>num2[i][j];
	
	for(i=0;i<n1;i++)
	{
		for(j=0;j<m2;j++)
		{
			k=0;
			sum=0;
			while(k!=n2)
			{
				sum=sum+(num1[i][k]*num2[k][j]);
				k++;
			}
			cout<<sum<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
