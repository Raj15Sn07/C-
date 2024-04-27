#include<iostream>
using namespace std;

int main()
{
	int n,i;
	bool flag=true;
	cout<<"Enter the size of the word: ";
	cin>>n;
	char arr[n+1];
	cout<<"Enter the word to check is it palindrome or not: ";
	cin>>arr;
	for(i=0;i<n;i++)
	{
		if(arr[i]!=arr[n-1-i])
		{
			flag=false;
			break;
		}
	}
	if(flag==true)
	 cout<<"The word is a palindrome";
	else 
	 cout<<"The word is not a palindrome";
	return 0;
}
