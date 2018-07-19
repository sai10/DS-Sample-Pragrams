#include<stdio.h>
struct node
{
    int info;
    struct node *prev;
    struct node *next;
};
void main()
{
    int n,c=0,i;
    struct node *ptr,*start=NULL,*end,*v;
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
        v=end=start=ptr;
      else
      {
          start->next=ptr;
          ptr->prev=start;
          start=ptr;
      }
      c++;
      fflush(stdin);
      printf("Do you want to add another(y/n)?:");
      scanf("%c",&ch);
    }while(ch=='y');
    ptr->next=v;
    i=0;
    while(end!=NULL)
    {
         if(i<c)
        printf(" %d",end->info);
       else
            break;
        end=end->next;
        i++;
    }
}


