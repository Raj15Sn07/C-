#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	string s="346822275";
	char t;
	sort(s.begin(),s.end());
	for(int i=0;i<s.size()/2;i++)
	{
		t=s[i];
		s[i]=s[s.size()-1-i];
		s[s.size()-1-i]=t;
	}
	cout<<s;
	return 0;
}
