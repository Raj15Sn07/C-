#include<iostream>
using namespace std;

class student{
	public:
		string name;
		int age;
		bool gender;
	
	student()
	{
		cout<<"Default Constructor"<<endl;
	}
	
	student(string s, int a, bool g)
	{
		cout<<"Parameterised Constructor"<<endl;
		name=s;
		age=a;
		gender=g;
	}// parameterised constructor
	
	student(student &a)
	{
		cout<<"Copy Constructor"<<endl;
		name=a.name;
		age=a.age;
		gender=a.gender;
	}// copy constructor OR Deep copy
	
	~student()
	{
		cout<<"Destructor"<<endl;
	}
	
	bool operator == (student &a)
	{
		if(a.age==age && a.name==name && a.gender==gender)
		 return true;
		else
		 return false;
	}
	
	void print()
		{
			cout<<"Name - "<<name<<endl;
			cout<<"Age - "<<age<<endl;
			cout<<"Gender - "<<gender<<endl;
		}
};

int main()
{
	student a("Raj",20,1);
	student b;
	student c=a; // copy a to c OR shallow copy
	a.print();
	if(a==c)
	{
		cout<<"Same"<<endl;
	}
	else
	{
		cout<<"Not Same"<<endl;
	}
	return 0;
}
