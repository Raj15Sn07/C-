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

class C:public B{
};

int main()
{
	C c;
	c.Afun();
	c.Bfun();
	
	return 0;
}
