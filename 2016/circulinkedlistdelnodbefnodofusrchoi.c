#include<stdio.h>
struct node
{
    int info;
    struct node *next;
};
void main()
{
    int n,c=0,i=0,m,o,k=0;
    struct node *ptr,*start=NULL,*v,*end,*go,*ptr1,*s,*t;
    char ch;
    do
    {
        printf("Enter number:");
        scanf("%d",&n);
        ptr=(struct node*)malloc(sizeof(struct node));
        ptr->info=n;
        ptr->next=NULL;
        if(start==NULL)
            t=v=end=go=start=ptr;
        else
        {
            start->next=ptr;
            start=ptr;
        }
        c++;
        fflush(stdin);
        printf("Do you want to add another:(y/n)?");
        scanf("%c",&ch);
    }while(ch=='y');
    ptr->next=t;

printf("In which place to delete the node:");
scanf("%d",&o);

if(c==o)
    {
        k=0;
     while(end!=NULL)
    {
        k++;
     if(o==2)
       {ptr1=end;
           v=go=end=ptr;break;}
    if(k==o-1)
    {
        ptr1=s->next;
   s->next=ptr;
    break;
    }
    s=end;
    end=end->next;
    }
    }
else
{
    while(end!=NULL || go!=NULL)
    {
    k++;
    if(k==2 || o==2)
    {
        go=t=v=end=end->next;
        ptr->next=t;
        break;
    }
    if(k==o)
    {
   end=end->next;
   ptr1=s->next;
   s->next=end;
    break;
    }
    s=end;
    end=end->next;
    }
}
c--;
printf("Values in the new linked list with their positons are:");
while(v!=NULL)
{
     if(i<c)
    printf("\n %d   %d",v->info,v->next);
    else
            break;
    v=v->next;
    i++;
}
free(ptr1);
}
