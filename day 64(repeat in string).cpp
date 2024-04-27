#include<iostream>
#include<string>
using namespace std;

void rem(string s, int n)
{
	if(n==0)
	 return;
	 
	char sn=s[0];
	if(sn==s[1])
	{
		rem(s.substr(1),n-1);
	}
	
	else
	{
		cout<<sn;
		rem(s.substr(1),n-1);
	}
	return;
}

int main()
{
	string s;
	getline(cin,s);
	rem(s,s.length());
	return 0;
}
