#include<iostream>
#include<string>
using namespace std;

void print(string s)
{
	if(s.length()==0)
	 return;
	 
	if(s[0]=='r' && s[1]=='s')
	{
		cout<<"1507";
		print(s.substr(2));
	}
	
	else
	{
		cout<<s[0];
		print(s.substr(1));
	}
}

int main()
{
	string raj;
	cout<<"Enter a string: ";
	getline(cin,raj);
	print(raj);
	return 0;
}
