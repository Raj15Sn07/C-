#include<iostream>
using namespace std;

class base{
	public:
		virtual void print()
		{
			cout<<"Print of base class"<<endl;
		}
		
		void disp()
		{
			cout<<"Display of base class"<<endl;
		}
};

class derived:public base{
	public:
		void print()
		{
			cout<<"Print of derived class"<<endl;
		}
		
		void disp()
		{
			cout<<"Display of derived class"<<endl;
		}
};

int main()
{
	base *basepointer;
	derived d;
	basepointer = &d;
	basepointer -> print();
	basepointer -> disp();
	
	return 0;
}
