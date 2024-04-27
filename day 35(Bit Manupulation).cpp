#include<iostream>
using namespace std;

bool get(int n, int i)
{
	int s=1<<i;
	if((n & s)!=0)
	 return 1;
	else
	 return 0;
}

int set(int n, int i)
{
	int s=1<<i;
	return (n | s);
}

int clear(int n, int i)
{
	int s=1<<i;
	int m=~s;
	return (n & m);
}

int update(int n, int i, int r)
{
	int s=clear(n,i);
	return (n | r<<i);
}
int main()
{
	int n,i,ch,rr,rs;
	bool r;
	cout<<"1. Get Bit\n2. Set Bit\n3. Clear Bit\n4.Update Bit\n\n";
	cout<<"Enter the the number: ";
	cin>>ch;
	switch(ch)
	{
		case 1:
			cout<<"Enter the number and the place of the bit ";
			cin>>n>>i;
			r=get(n,i);
			if(r==true)
			 cout<<"1";
			else
			 cout<<"0";
			break;
			
		case 2:
			cout<<"Enter the number and the place of new bit ";
			cin>>n>>i;
			rs=set(n,i);
			cout<<"The new number is "<<rs;
			break;
			
		case 3:
			cout<<"Enter the number and the place of the bit to clear ";
			cin>>n>>i;
			rs=clear(n,i);
			cout<<"The new number will be "<<rs;
			break;
			
		case 4:
			cout<<"Enter the number, the place of the bit to update and the bit ";
			cin>>n>>i>>rr;
			rs=update(n,i,rr);
			cout<<"The new number will be "<<rs;
			break;
		
		default:
			cout<<"You have entered wrong number.";
			break;
	}
	return 0;
}
