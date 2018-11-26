#include<iostream.h>
#include<conio.h> 
int queue[100],front=-1,rear=-1,max;
void insert_element();
void delete_element();
void display_queue();

void main()
{ clrscr();
  int option;
  cout<<"Implement Queue operations by-Tarun Rawat\n\n";
  cout<<"Enter the size of Queue : ";
  cin>>max;
  do
  {cout<<"1.Insert an element";
   cout<<"\n2.Delete an element";
   cout<<"\n3.Display queue";
   cout<<"\n4.Exit";
   cout<<"\nEnter your choice : ";
   cin>>option;
   switch(option)
   { case 1: insert_element();
          break;
     case 2: delete_element();
         break;
     case 3: display_queue();
         break;
     case 4: break;
   }
 }while(option!=4);
getch();
}

void insert_element()
{
  int num;
  cout<<"\nEnter the item to be inserted : ";
  cin>>num;
  if(front==0 && rear==max-1)
    cout<<"\nQueue OverFlow Occured\n";
  else if(front==-1&&rear==-1)
  {
      front=rear=0;
      queue[rear]=num;

  }
  else if(rear==max-1 && front!=0)
  {
    rear=0;
    queue[rear]=num;
  }
  else
  {
      rear++;
      queue[rear]=num;
  }
}
void delete_element()
{
  int element;
  if(front==-1)
  {
      cout<<"\nUnderflow\n";
  }
  element=queue[front];
  if(front==rear)
     front=rear=-1;
  else
  {
    if(front==max-1)
      front=0;
    else
      front++;
       cout<<"\nThe deleted element is : "<<element;
  }

}
void display_queue()
{
    int i;
    if(front==-1)
      cout<<"\nNo elements to display";
    else
    {
      cout<<"\nThe queue elements are :\n";
      for(i=front;i<=rear;i++)
      {
      cout<<"\t"<<queue[i];
      }
    }
}
