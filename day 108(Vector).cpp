#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	
	for(int i=0;i<v.size();i++)
	 cout<<v[i]<<" ";
	 
	vector<int>::iterator it;
	for(it=v.begin();it!=v.end();it++)
	 cout<<*it<<" ";
	 
//	for(auto element:v)
//	 cout<<element<<" ";

	v.pop_back();			//10 20
	
	vector<int> v2(3,15);		//15 15 15
	
	swap(v,v2);
	
	for(int i=0;i<v.size();i++)
	 cout<<v[i]<<" ";
	 
	for(int i=0;i<v2.size();i++)
	 cout<<v2[i]<<" ";
	 
//	sort(v.begin(),v.end());
	
	
	//std::pair
	
	pair<int,char> p;
	p.first=15;
	p.second='r';
	
	return 0;
}
