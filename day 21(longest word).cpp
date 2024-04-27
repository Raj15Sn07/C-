#include<iostream>
using namespace std;

int main()
{
	int i,r=0,s,j=0;
	char arr[100];
	cout<<"Enter the sentence\n";
	cin.getline(arr,100);
	for(i=0;i<49;i++)
	{
		if(arr[i]==' ' || arr[i]=='\0')
		{
			r=max(r,s);
			s=0;
		}
		else
		 s++;
		if(arr[i]=='\0')
		 break;
	}
	cout<<"Longest word contains "<<r<<" words";  
	return 0;
}
