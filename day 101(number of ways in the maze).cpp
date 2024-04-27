#include<iostream>
using namespace std;

int fun(int a, int i, int j)
{
	if(i==a-1 && j==a-1)
	 return 1;
	 
	if(i>=a || j>=a)
	 return 0;
	 
	return (fun(a,i+1,j)+fun(a,i,j+1));
}

int main()
{
	int a;
	cout<<"Enter the size of the maze: ";
	cin>>a;
	cout<<"Number of possible ways="<<fun(a,0,0);
	return 0;
}
