#include<iostream>
#include<string>
using namespace std;

void sub(string s, string rs)
{
	if(s.length()==0)
	{
		cout<<rs<<endl;
		return;
	}
	
	char t=s[0];
	string tr=s.substr(1);
	
	sub(tr,rs);
	sub(tr,rs+t);
}

int main()
{
	string s;
	cout<<"Enter a string: ";
	getline(cin,s);
	sub(s,"");
	return 0;
}
