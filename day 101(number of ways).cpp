#include<iostream>
using namespace std;

int fun(int s, int e)
{
	if(s==e)
	{
		return 1;
	}
	
	int ans=1+fun(s+1,e);
	return ans;
}

int main()
{
	int a,b;
	cout<<"Enter the starting and ending point: \n";
	cin>>a>>b;
	cout<<"The number of possible ways="<<fun(a,b);
	return 0;
}
