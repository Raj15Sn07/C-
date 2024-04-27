#include<iostream>
using namespace std;

void pyth(int a,int b,int c)
{
	int a2,b2,c2;
	if((a2=a*a)==(b2=b*b)+(c2=c*c) || (b2=b*b)==(a2=a*a)+(c2=c*c) || (c2=c*c)==(b2=b*b)+(a2=a*a))
	 cout<<"Pyhtagorian triplet";
	else
	 cout<<"Not a pythagorian triplet";
}

int main()
{
	int a,b,c;
	cout<<"Enter the numbers to check pythagorian trplet\n";
	cin>>a>>b>>c;
	pyth(a,b,c);
	return 0;
}
