#include<iostream>
using namespace std;

int firstocc(int num[], int n, int i, int s)
{
	if(i==n)
	 return 0;
	 
	else if(num[i]==s)
	{
		return i;
	}
	 
	return firstocc(num,n,i+1,s);
}

int lastocc(int num[], int n, int s)
{
	if(n==0)
	 return 0;
	
	else if(num[n]==s)
	 return n;
	 
	return lastocc(num,n-1,s);
}

int main()
{
	int n,s;
	
	cout<<"Enter the size of the array: ";
	cin>>n;
	
	int num[n];
	
	cout<<"\nEnter the elements of the array\n";
	
	for(int i=0;i<n;i++)
	 cin>>num[i];
	 
	cout<<"\nEnter a element to find it`s idex: ";
	cin>>s;
	
	int first=firstocc(num,n,0,s);
	int last=lastocc(num,n,s);
	
	cout<<first<<" "<<last;
	return 0;
}
