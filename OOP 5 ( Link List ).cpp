#include<iostream>
#include<conio.h>
using namespace std;

class node{
	public:
		int data;
		node* next;
		
	node(int val)
	{
		data=val;
		next=NULL;
	}
};

void InsertAtLast(node* &head, int val)
{
	node* n= new node(val);
	
	if(head==NULL)
	{
		head=n;
		return;
	}
	
	node* temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=n;
	
	return;
}

void InsertAtFirst(node* &head, int val)
{
	node* n = new node(val);
	
	n->next=head;
	head=n;
}

void print(node* head)
{
	node* temp=head;
	
	while(temp!=NULL)
	{
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<"NULL";
	
	getch();
	
	return;
}


void reverse(node* &head)
{
	node* previous=NULL;
	node* current=head;
	node* nxt;
	
	while(current!=NULL)
	{	
		nxt=current->next;
		current->next=previous;
		
		previous=current;
		current=nxt;
	
	}
	
	head=previous;  
}

void dele(node* &head)
{
	node* s=head;
	head=head->next;
	delete s;
	return;
}


void del(node* &head, int n)
{
	int i;
	node* temp=head;
	node* r=temp->next;
	
	if(n==1)
	{
		dele(head);
		return;
	}
	
	for(i=1;i<n;i++)
	{
		if(temp->next==NULL)
		{
			cout<<"No element exist on index no. "<<n;
			getch();
			return;
		}
		temp=temp->next;
		r=temp->next;
	}
	temp->next=r->next;
	delete r;
	
	return;
}


void insert(node* &head, int n, int r)
{
	node* temp=head;
	node* t;
	node* val = new node(r);
	for(int i=1;i<n;i++)
	{
		if(temp->next==NULL)
		{
			cout<<"No element exist on index no. "<<n;
			getch();
			return;
		}
		
		temp=temp->next;
	}
	t=temp->next;
	temp->next=val;
	val->next=t;
	
	return;
}

int main()
{
	int n=0,choice=0,r=0;
	node* head=NULL;
	while(1)
	{
		system("CLS");
		
		cout<<"1. Enter a new element in the last. \n2. Enter a new value at first.\n3. Print the list.\n4. Reverse the list.\n5. Delete a element.\n6. Insert a element in between.\n\nEnter the choice: ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"Enter the number\n";
				cin>>n;
				InsertAtLast(head, n);
				break;
			
			case 2:
				cout<<"Enter the number\n";
				cin>>n;
				InsertAtFirst(head, n);
				break;
			
			case 3:
				print(head);
				break;
			
			case 4:
				reverse(head);
				break;
			
			case 5:
				cout<<"Enter the index number to delete the element: ";
				cin>>n;
				del(head,n);
				break;
			
			case 6:
				cout<<"Enter the index number: ";
				cin>>n;
				cout<<"Enter the value: ";
				cin>>r;
				insert(head,n,r);
				break;
			
			default:
				cout<<"Enter the right choice\n";
				break;
		}
	}
	
	return 0;
}
