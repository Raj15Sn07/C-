#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int arr[26],i,mx=0;
	string s;
	getline(cin,s);
	
	for(i=0;i<s.size();i++)
	 arr[i]=0;
	 
	for(i=0;i<s.size();i++)
	 arr[s[i]-'a']++;
	
	char chr;
	
	for(i=0;i<s.size();i++)
	{
		if(arr[i]>mx)
		{
			mx=arr[i];
			chr=i+'a';
		}
	}
	
	cout<<mx<<" "<<chr;
	
	return 0;
}
