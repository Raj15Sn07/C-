#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int i;
	string s="kajhghjnsjnahsi";
	
	transform(s.begin(),s.end(),s.begin(),::toupper);
	cout<<s<<"\n";
	
	transform(s.begin(),s.end(),s.begin(),::tolower);
	cout<<s;
	return 0;
}
