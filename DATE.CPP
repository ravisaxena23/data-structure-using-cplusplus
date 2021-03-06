/* C++ Linked Lists - Example Program of Linked Lists
 * Traversal in a list */

#include<iostream.h>
#include<conio.h>
#include<process.h>

struct node
{
	int info;
	node *next;
} *start, *newptr, *save, *ptr, *rear;

node *create_new_node(int);
void insert_node(node *);
void travers(node *);

void main()
{
	clrscr();
	start = rear = NULL;
	int inf;
	char ch='y';

	while(ch=='y' || ch=='Y')
	{
		cout<<"Enter Information for the new node: ";
		cin>>inf;
		newptr = create_new_node(inf);
		if(newptr == NULL)
		{
			cout<<"\nSorry..!!..cannot create new node..!!..Aborting..!!";
			cout<<"\nPress any key to exit..";
			getch();
			exit(1);
		}
		insert_node(newptr);
		cout<<"Want to enter more nodes ? (y/n)..";
		cin>>ch;
		cout<<"\n";
	}
	cout<<"The list now is:\n";
	travers(start);
	getch();
}

node *create_new_node(int n)
{
	ptr = new node;
	ptr->info = n;
	ptr->next = NULL;
	return ptr;
}

void insert_node(node *np)
{
	if(start==NULL)
	{
		start = rear = np;
	}
	else
	{
		rear -> next = np;
		rear = np;
	}
}

void travers(node *np)
{
	while(np != NULL)
	{
		cout<<np->info<<" -> ";
		np = np->next;
	}
	cout<<" !!\n";
}