#include<iostream>
using namespace std;

class student{
	string s="Hello";
	public:
		string name;
		int age;
		bool gender;
		
		void hello()
		{
			cout<<s;  //we can acces private data members using any function with objects
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
	student arr[3],t;							//student a;
											//a.name="Sneha"; //a.age=20; //a.gender=0;
	
	for(int i=0;i<3;i++)
	{
		cout<<"Name - ";
		cin>>arr[i].name;
		
		cout<<"Age - ";
		cin>>arr[i].age;
		
		cout<<"Gender - ";
		cin>>arr[i].gender;
	}
	
	cout<<endl;
	t.hello();
	cout<<endl;
	
	for(int i=0;i<3;i++)
	{
		arr[i].print();
	}
	
	return 0;
}
