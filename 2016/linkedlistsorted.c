#include <stdio.h>
#include <malloc.h>
struct  link_list
{
	int data;
	struct link_list *next;
};
typedef struct  link_list node;
node *start;
int num;
void main()
{
	start = (node *) malloc(sizeof(node));
	create(start);
	printf("\n created list is as follows:\n");
	display(start);
	sort(start);
	printf("\n sorted is as follows:\n");
	display(start);
	getch();
}
void create(node *ptr)
{
	char ch;
	num = 0;
	do
	{
		printf("\n Input the values of the node : %d: ", (num+1));
		scanf("%d", &ptr->data);
		fflush(stdin);
		printf("\n want to continue(y/n)->: ");
		ch = getchar();
		if(ch=='y')
		{
		ptr->next = (node *) malloc(sizeof(node));
		ptr = ptr->next;
		}
		num ++;
	}while(ch=='y');
	ptr->next=NULL;
	printf("\n Total nodes = %d", num);
}
void display(node *ptr)
{
	while (ptr!=NULL)
	{
		printf(" %d",  ptr->data);
		ptr = ptr->next;
	}
}
void sort(node *ptr)
     {
      node *counter;
      for(; ptr->next != NULL; ptr = ptr->next)
	   {
	     for(counter = ptr->next; counter != NULL; counter = counter->next)
	       {
		 if(ptr->data > counter->data)
		   {
		     int temp = ptr->data;
		     ptr->data = counter->data;
		     counter->data = temp;
		    }
		 }
	      }
     }
