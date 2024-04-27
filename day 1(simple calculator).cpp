#include<iostream>
using namespace std;

int main()
{
	int a,b;
	char s;
	cout<<"Enter first number:\n";
	cin>>a;
	cout<<"Enter second number:\n";
	cin>>b;
	cout<<"Enter the operator:\n";
	cin>>s;
	switch(s)
	{
		case '+':
			cout<<"The sum is "<<a+b;
			break;
		case '-':
			cout<<"The difference is "<<a-b;
			break;
		case '*':
			cout<<"The product is "<<a*b;
			break;
		case '/':
			cout<<"The quotient is "<<a/b;
			break;
		default:
			cout<<"Please! Enter a valid operator.";
			
	}
	return 0;
}
