#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node
{
	int item;
	struct node *next;
};

void addelement(struct node **s, int data)
{
	struct node *n,*t;
	n=(struct node *)malloc(sizeof(struct node));
	n->item=data;
	n->next=NULL;
	if(*s==NULL)
	 *s=n;
	else
	{
		t=*s;
		while(t->next!=NULL)
		 t=t->next;
		t->next=n;
	}
	return;
}

void viewlist(struct node *st)
{
	if(st==NULL)
	{
		printf("\nList is empty");
		getch();
	}
	else
	 while(st)
	 {
		printf("%d ",st->item);
		st=st->next;
	 }
	
	getch();
	return;
}

void deletefirst(struct node **st)
{
	struct node *t=*st;
	*st=t->next;
	free(t);
}

void deletelast(struct node **st)
{
	struct node *t=*st,*n;
	while(t->next->next!=NULL)
	 t=t->next;
	n=t->next;
	t->next=NULL;
	free(n);
	printf("\nNow the elements of the list are: ");
	viewlist(*st);
}

int main()
{
	struct node *start=NULL;
	int choice,data;
	while(1)
	{
		system("cls");
		printf("1: Add an element in the list.\n");
		printf("2: View the list.\n");
		printf("3: Delete the first element of the list.\n");
		printf("4: Delete the last element of the list.\n");
		printf("\nEnter any option: ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				printf("\nEnter an element: ");
				scanf("%d",&data);
				addelement(&start,data);
				break;
			
			case 2:
				printf("\nList elements are: ");
				viewlist(start);
				break;
				
			case 3:
				deletefirst(&start);
				break;
				
			case 4:
				deletelast(&start);
				break;
				
			default:
				printf("You have entered wrong option!");
				break;
		}
	}
	return 0;
}
