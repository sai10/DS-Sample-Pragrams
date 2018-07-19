#define true 1
#define false 0
#include<malloc.h>
#include<stdio.h>
#include<conio.h>
#include<process.h>
struct q_point
{
  int ele;
  struct q_point* n;
};
struct q_point *f_ptr = NULL;
int main()
{
  int ele,choice,j;
  while(1)
  {
    printf("\n\n****IMPLEMENTATION OF QUEUE USING POINTERS****\n");
    printf("==============================================");
    printf("\n\t\t  MENU\n");
    printf("==============================================");
    printf("\n\t[1] To insert an element");
    printf("\n\t[2] To remove an element");
    printf("\n\t[3] To display all the elements");
    printf("\n\t[4] Exit");
    printf("\n\n\tEnter your choice:");
    scanf("%d", &choice);
    switch(choice)
    {
      case 1:
      {
	printf("\n\tElement to be inserted:");
	scanf("%d",&ele);
	add_ele(ele);
	getch();
	break;
      }
      case 2:
      {
	if(!e_que())
	{
	  j=rem_ele();
	  printf("\n\t%d is removed from the queue",j);
	  getch();
	}
	else
	{
	  printf("\n\tQueue is Empty.");
	  getch();
	}
	break;
      }
      case 3:
	show_ele();
	getch();
	break;
      case 4:
          exit(1);
    break;
     default:
	printf("\n\tInvalid choice.");
	getch();
	break;
    }
  }
}
int e_que(void)
{
  if(f_ptr==NULL)
  return true;
  return false;
}
void add_ele(int ele)
{
  struct q_point *queue = (struct q_point*)malloc(sizeof(struct q_point));
  queue->ele = ele;
  queue->n = NULL;
  if(f_ptr==NULL)
    f_ptr = queue;
  else
  {
    struct q_point* ptr;
    ptr = f_ptr;
    for(ptr=f_ptr ;ptr->n!=NULL; ptr=ptr->n);
      ptr->n = queue;
  }
}
int rem_ele()
{
  struct q_point* queue=NULL;
  if(e_que()==false)
  {
    int j = f_ptr->ele;
    queue=f_ptr;
    f_ptr = f_ptr->n;
    free (queue);
    return j;
  }
  else
  {
    printf("\n\tQueue is empty.");
  }
}
void show_ele()
{
  struct q_point *ptr=NULL;
  ptr=f_ptr;
  if(e_que())
  {
    printf("\n\tQUEUE is Empty.");
    return;
  }
  else
  {
    printf("\n\tElements present in Queue are:\n\t");
    while(ptr!=NULL)
    {
      printf("%d\t",ptr->ele);
      ptr=ptr->n;
    }
  }
}
