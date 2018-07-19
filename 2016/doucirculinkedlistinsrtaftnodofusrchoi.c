#include<stdio.h>
struct node
{
    int info;
    struct node *prev;
    struct node *next;
};
void main()
{
    int n,o,m,c=0,k=0,s,i=0;
    struct node *ptr,*start=NULL,*v,*ptr1,*end,*go;
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
        v=go=end=start=ptr;
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
    printf("Enter the element to be inserted:");
    scanf("%d",&m);
    printf("Enter the node so as to insert a node next to it:");
    scanf("%d",&o);
    ptr1=(struct node*)malloc(sizeof(struct node));
    ptr1->prev=NULL;ptr1->next=NULL;
    ptr1->info=m;
    if(o==c)
            {
                ptr->next=ptr1;
                ptr1->prev=ptr;
            }
    else
    {
    while(end!=NULL)
    {
    k++;
    if(k==o)
    {
    s=end->next;
    ptr1->prev=end;
    end->next=ptr1;
    end=ptr1;
    end->next=s;
    break;
    }
    end=end->next;
    }
    c++;
    }
    while(go!=NULL)
    {
       if(i<c)
        printf(" %d",go->info);
         else
            break;
        go=go->next;
        i++;
    }

}



