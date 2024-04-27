#include<iostream>
#include<string>
using namespace std;

void sn(string s, string ans)
{
	if(s.length()==0)
	{
		cout<<ans<<endl;
		return;
	}
	
	for(int i=0;i<s.length();i++)
	{
		char ch=s[i];
		string st=s.substr(0,i)+s.substr(i+1);
		
		sn(st,ans+ch);
	}
}

int main()
{
	string s;
	cout<<"Enter a string: ";
	cin>>s;
	sn(s,"");
	return 0;
}
