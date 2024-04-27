#include<iostream>
#include<string>
using namespace std;

void rev(string s)
{
	if(s.length()==0)
	 return;
	 
	string r=s.substr(1);
	rev(r);
	cout<<s[0];
	return;
}

int main()
{
	string s;
	cout<<"Enter a string to reverse it: ";
	getline(cin,s);
	cout<<"\n";
	rev(s);
	return 0;
}
