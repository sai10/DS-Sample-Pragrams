 #include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *next;struct node *prev;
};
void main()
{
 int n,m,k=0,o,c=0,i=0;
    struct node *ptr,*start=NULL,*end,*go,*s,*ptr1,*v;
    char ch;
do
{
    printf("Enter a number:");
    scanf("%d",&n);
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->info=n;
    ptr->next=NULL;ptr->prev=NULL;
   if(start==NULL)
        v=go=end=start=ptr;
    else
    {
        start->next=ptr;ptr->prev=start;
        start=ptr;
    }
    c++;
    fflush(stdin);
    printf("Do you want to add another(y/n)?");
    scanf("%c",&ch);
}while(ch=='y');
ptr->next=v;
printf("Enter the node so as to delete the next node:");
scanf("%d",&o);
   s=end;
    while(k!=o)
    {
        k++;
 s=end;
    end=end->next;
    ptr1=end;
    }
    s->next=end->next;
    end->prev=s;
    c--;
printf("Values in the new linked list with their positons are:");
while(go!=NULL)
{
    if(i<c)
    printf("\n %d   %d",go->info,go->next);
    else
        break;
    go=go->next;
    i++;
}
free(ptr1);
}

