#include <iostream.h>
#include <conio.h>
void FindMaxMin(int *array, int size)
{        int min,max;
	 min=max=array[0];
	 for(int i=0;i<size;i++)
	 {
	     if(array[i]<min)
	       min=array[i];
	    else if(array[i]>max)
	       max=array[i];
	 }
 cout<<"Minimum Number  = "<<min<<endl;
 cout<<"Maximum Number = "<<max<<endl;
}
void main()
{
clrscr();
    int array[100];
    int n;
    cout<<"how long array you want";
    cin>>n;
    for(int i=0;i<=n;i++)
	{
	 cout<<"array ["<<i<<"]"<<"= "<<endl;
	 cin>>array[i];
	}
    FindMaxMin(array,n);
getch();
}