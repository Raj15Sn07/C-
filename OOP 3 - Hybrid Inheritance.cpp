#include<iostream>
using namespace std;

class A{
 	public:
 		void Afun()
 		{
 			cout<<"Class A";
		}
 };

class B:public A{
	public:
		void Bfun()
		{
			cout<<"Class B";
		}
};

class C{
 	public:
 		void Cfun()
 		{
 			cout<<"Class C";
		}
 };

class D:public B,public C{
 	public:
 		void Dfun()
 		{
 			cout<<"Class C";
		}
 };

int main()
{
	D d;
	d.Afun();
	d.Bfun();
	d.Cfun();
	d.Dfun();
	
	return 0;
}
