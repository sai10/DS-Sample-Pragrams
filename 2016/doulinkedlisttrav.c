#include<stdio.h>
struct node
{
    int info;
    struct node *prev;
    struct node *next;
};
void main()
{
    int n;
    struct node *ptr,*start=NULL,*end;
    char ch;
    do
    {
      printf("Enter a Number:");
      scanf("%d",&n);
      ptr=(struct node*)malloc(sizeof(struct node));
      ptr->prev=NULL;
      ptr->info=n;
      ptr->next=NULL;
      if(start==NULL)
        end=start=ptr;
      else
      {
          start->next=ptr;
          ptr->prev=start;
          start=ptr;
      }
      fflush(stdin);
      printf("Do you want to add another(y/n)?:");
      scanf("%c",&ch);
    }while(ch=='y');
    while(end!=NULL)
    {
        printf(" %d",end->info);
        end=end->next;
    }
}

