#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int i;
	string s="kajhghjnsjnahsi";
	
	for(i=0;i<s.size();i++)
	{
		if(s[i]>='a' && s[i]<='z')
		 s[i]-=32;
	}
	
	cout<<s;
	
	for(i=0;i<s.size();i++)
	{
		if(s[i]>='A' && s[i]<='Z')
		 s[i]+=32;
	}
	
	cout<<"\n"<<s;
	return 0;
}
