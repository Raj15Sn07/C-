#include<iostream>
using namespace std;

//Single Inheritance
 
class A{
	public:
		void func()
		{
			cout<<"Inheritance";
		}
};

class B:public A{
	
};

int main()
{
	B b;
	
	b.func();
	
	return 0;
}
