#include<stdio.h>
#include<conio.h>

struct stpoint
{
  int ele;
  struct stpoint *l;
}

*t;
int i;
int main()
{
  char choice,ch;
  int i,num1,num2;

  //    clrscr();
  do
    {
        system("cls");
    printf("\n\t******************");
    printf("\n\t STACK OPERATIONS");
    printf("\n\t******************");
    printf("\n\t (1)PUSH");
    printf("\n\t (2)POP");
    printf("\n\t (3)PEEP");
    printf("\n\t (4)DISPLAY");
    printf("\n\t (5)EXIT");
    printf("\n\n     ENTER YOUR CHOICE:");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1:
      {
	  printf("\n\tElement to be pushed:");
	  scanf("%d",&num1);
	  push(num1);
	  break;
      }
      case 2:
      {
	  num2=pop();
	  printf("\n\tElement to be popped: %d\n\t",num2);
	  break;
      }
      case 3:
      peep();
	  break;
      case 4:
      {
	  printf("\n\tElements present in the stack are:\n\t");
	  display();
	  break;
      }
      default:
     	exit(0);
	    break;
    }
  fflush(stdin);
    //system("cls");
    printf("\n\n    DO YOU WANT TO TRY OTHER OPERATIONS(y/n)?:");
    scanf("%c",&ch);
  }while(ch=='y');
}

void push(int j)
{
  struct stpoint *m;
  m=(struct stpoint*)malloc(sizeof(struct stpoint));
  m->ele=j;
  m->l=t;
  t=m;
  return;
}

int pop()
{
  if(t==NULL)
  {
    printf("\n    STACK is Empty.");
    return 0;
  }
  else
  {
    int i=t->ele;
    t=t->l;
    return (i);
  }
}

void peep()
{
    struct stpoint *pointer=NULL;
  pointer=t;
  if(t==NULL)
  {
    printf("\n    STACK is Empty.");
  }
  else
  {printf("      %d",pointer->ele);
    pointer=pointer->l;}
}

void display()
{
  struct stpoint *pointer=NULL;
  pointer=t;
  if(t==NULL)
  {
    printf("\n    STACK is Empty.");
  }
  while(pointer!=NULL)
  {
    printf("%d\t",pointer->ele);
    pointer=pointer->l;
  }
}


