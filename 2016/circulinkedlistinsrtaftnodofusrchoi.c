#include<stdio.h>
struct node
{
    int info;
    struct node *next;
};
void main()
{
    int n,c=0,i=0,m,o,k=0;
    struct node *ptr,*start=NULL,*v,*end,*go,*ptr1,*s;
    char ch;
    do
    {
        printf("Enter number:");
        scanf("%d",&n);
        ptr=(struct node*)malloc(sizeof(struct node));
        ptr->info=n;
        ptr->next=NULL;
        if(start==NULL)
            v=end=go=start=ptr;
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
    ptr->next=v;
    printf("Entered value of new node:");
scanf("%d",&m);
printf("In which place to insert the node:");
scanf("%d",&o);
ptr1=(struct node*)malloc(sizeof(struct node));
ptr1->info=m;
ptr1->next=NULL;
if(o==c)
    {ptr->next=ptr1;ptr1->next=v;}
else
{
    while(end!=NULL)
    {
    k++;
    if(k==o)
    {
    s=end->next;
    end->next=ptr1;
    end=ptr1;
    end->next=s;
    break;
    }
    end=end->next;
    }
}
c++;
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
}

