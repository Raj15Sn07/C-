#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool myCompare(pair<int,int>p1, pair<int,int>p2)
{
	return p1.first<p2.first;
}

int main()
{
	int n;
	cout<<"Enter the size of the array: ";
	cin>>n;
	
	int arr[n];
	
	cout<<"Enter the elements of the array:\n";
	
	for(int i=0;i<n;i++)
	 cin>>arr[i];
	
	vector<pair<int,int> >v;
	
	for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
	 v.push_back(make_pair(arr[i],i));
//	alternative
//	pair<int,int>p;
//	p.first=arr[i];
//	p.second=i;
	
	sort(v.begin(), v.end(), myCompare);
	
	for(int i=0;v.size();i++)
	{
		arr[v[i].second]=i;
	}
	
	for(int i=0;v.size();i++)
	{
		cout<<arr[i];
	}
	
	return 0;
}
