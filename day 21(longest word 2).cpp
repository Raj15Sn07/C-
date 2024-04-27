#include<iostream>
using namespace std;

int main()
{
	int i,r=0,s,st=0,maxst=0;
	char arr[100];
	cout<<"Enter the sentence\n";
	cin.getline(arr,100);
	for(i=0;i<99;i++)
	{
		if(arr[i]==' ' || arr[i]=='\0')
		{
			if(s>r)
			 maxst=st;
			r=max(r,s);
			s=0;
			st=i+1;
		}
		else
		 s++;
		if(arr[i]=='\0')
		 break;
	}
	cout<<"Longest word contains "<<r<<" words\n";  
	for(i=0;i<r;i++)
	 cout<<arr[i+maxst];
	return 0;
}
