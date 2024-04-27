#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	string s="346822275";
	char t;
	sort(s.begin(),s.end(),greater<int>());
	cout<<s;
	return 0;
}
