#include<iostream>
using namespace std;
int main()
{
	int a,b,i;
	cout<<"Enter the range for printing prime numbers\n";
	cin>>a>>b;
	for(a;a<=b;a++)
	{
		for(i=2;i<a;i++)
		{
			if(a%i==0)
		 	break;
		}
		if(i==a)
		 cout<<a<<" ";
    }
	return 0;
}
