#include<iostream>
#include<string>
using namespace std;

string print(string s)
{
	if(s.length()==0)
	 return "";
	 
	char sn=s[0];
	string rs=print(s.substr(1));
	
	if(sn=='r')
	{
		return (rs+sn);
	}
	
	return (sn+rs);
}

int main()
{
	string s;
	getline(cin,s);
	cout<<print(s);
	return 0;
}
