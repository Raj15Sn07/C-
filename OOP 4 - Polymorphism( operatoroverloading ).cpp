#include<iostream>
using namespace std;

class complex{
	private:
		int real,imag;
		
	public:
		complex(int r=0, int i=0)
		{
			real=r;
			imag=i;
		}
		
		complex operator + (complex const &obj)
		{
			complex res;
			res.imag=imag+obj.imag;
			res.real=real+obj.real;
			return res;
		}
		
		void disp()
		{
			cout<<real<<" + i"<<imag<<endl;
		}
		
};

int main()
{
	complex c1(5,8), c2(7,15);
	complex c3=c1+c2;
	c3.disp();
	
	return 0;
}
