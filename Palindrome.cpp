#include<iostream>
#include<string>
using namespace std;

int main()
{
	string r;
	bool flag=true;
	
	cout<<"Enter a word to check palindrome: ";
	cin>>r;
	
	int i=r.size()-1;
	int a=0;
	
	while(a<i)
	{
		if(r[a]!=r[i])
		{
			flag=false;
			break;
		}
		a++;
		i--;
	}
	
	if(flag==true)
	 cout<<"Entered word is a palindrome";
	 
	else
	 cout<<"Entered word is not a palindrome";
	
	return 0;
}
