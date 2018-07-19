#include <stdio.h>
struct  link_list
{
	int data;
	struct link_list *next;
};
typedef struct  link_list node;
node *list1, *list2, *list3;
int num;
void main()
{
	list1 = (node *)malloc(sizeof(node));
	list2 = (node *)malloc(sizeof(node));
	list3 = (node *)malloc(sizeof(node));

	printf("\nENTER ELEMENTS IN LIST1:");
	create(list1);
	printf("\n Original list ONE is as follows:\n");
	display(list1);
    printf("\nENTER ELEMENTS IN LIST2:");
	create(list2);
	printf("\n Original list TWO is as follows:\n");
	display(list2);
    concate(list1, list2, list3);
	sort(list3);
	printf("\nMERGED LIST IS:");
	dup(list3);
	display(list3);
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
void concate(node *list1, node *list2, node *list3)
{
	while(list1!= NULL)
	{
		list3->data = list1->data;
		list1 = list1->next;
		list3->next = (node* ) malloc(sizeof(node));
		list3 = list3->next;
	}
	while(list2->next!=NULL)
	{
		list3->data = list2->data;
		list2 = list2->next;
		list3->next = (node*)malloc(sizeof(node));
		list3 = list3->next;
	}
	list3->data = list2->data;
	list3->next = NULL;
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
void dup(node *ptr)
{
    node *counter,*pointer;
    for(;ptr->next!=NULL;ptr=ptr->next)
    {
        if(ptr->next==NULL && counter->data==ptr->data)
        {
        pointer=ptr;
        counter->next=NULL;
        ptr=counter;
        ptr->next=NULL;
        free(pointer);
        }
        if(counter->data==ptr->data && ptr->next!=NULL)
        {
            pointer=ptr;
            ptr=ptr->next;
            counter->next=ptr;
            free(pointer);
        }
        counter=ptr;
    }
}

