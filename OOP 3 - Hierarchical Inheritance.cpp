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


class C:public A{
	public:
		void Cfun()
		{
			cout<<"Class C";
		}
};

class D:public B{
	public:
		void Dfun()
		{
			cout<<"Class D";
		}
};

class E:public B{
	public:
		void Efun()
		{
			cout<<"Class E";
		}
};

class F:public C{
	public:
		void Ffun()
		{
			cout<<"Class F";
		}
};

class G:public C{
	public:
		void Gfun()
		{
			cout<<"Class G";
		}
};
int main()
{
	D d;
	E e;
	F f;
	G g;
	
	d.Afun();
	d.Bfun();
	d.Dfun();
	
	e.Afun();
	e.Bfun();
	e.Efun();
	
	f.Afun();
	f.Cfun();
	f.Ffun();
	
	g.Afun();
	g.Cfun();
	g.Gfun();
	
	
	return 0;
}
