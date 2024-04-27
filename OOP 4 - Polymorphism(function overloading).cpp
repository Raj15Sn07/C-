#include<iostream>
using namespace std;

class raj{
	public:
		void fun()
		{
			cout<<"Function without arguement"<<endl;
		}
		
		void fun(int i)
		{
			cout<<"Function with int arguement"<<endl;
		}
		
		void fun(double k)
		{
			cout<<"Function with double arguement"<<endl;
		}
};

int main()
{
	raj r;
	r.fun();
	r.fun(3);
	r.fun(7.4);
	
	return 0;
}
