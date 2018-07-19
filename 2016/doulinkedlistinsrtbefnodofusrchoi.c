
 #include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *next;struct node *prev;
};
void main()
{
    int n,m,k=0,o;
    struct node *ptr,*start=NULL,*end,*go,*ptr1,*s,*v;
    char ch;
do
{
    printf("Enter a number:");
    scanf("%d",&n);
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->info=n;
    ptr->next=NULL;
    ptr->prev=NULL;
    if(start==NULL)
        go=end=start=ptr;
    else
    {
        start->next=ptr;
        ptr->prev=start;
        start=ptr;
    }
    fflush(stdin);
    printf("Do you want to add another(y/n)?");
    scanf("%c",&ch);
}while(ch=='y');
printf("Entered value of new node:");
scanf("%d",&m);
printf("In which place to insert the node:");
scanf("%d",&o);
ptr1=(struct node*)malloc(sizeof(struct node));
ptr1->info=m;
ptr1->next=NULL;ptr1->prev=NULL;
if(o==1 )
    {
        s=end->next;
        ptr1->next=go;
        ptr1->prev=end;
       go=end=ptr1;
    }
else
{
    while(end!=NULL)
    {
    k++;
    if(k==o-1)
    {
    s=end->next;
    end->next=ptr1;
    ptr1->prev=end;
    end=ptr1;
    end->next=s;
    break;
    }
    end=end->next;
    }
}
printf("Values in the new linked list with their positons are:");
while(go!=NULL)
{
    printf("\n %d   %d",go->info,go->next);
    go=go->next;
}
}
