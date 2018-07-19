#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *next;
};
void main()
{
    int n,m,k=0,o;
    struct node *ptr,*start=NULL,*end,*go,*ptr1,*s,*v;
    char ch,c;
do
{
    printf("Enter a number:");
    scanf("%d",&n);
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->info=n;
    ptr->next=NULL;
    if(start==NULL)
        v=go=end=start=ptr;
    else
    {
        start->next=ptr;
        start=ptr;
    }
    fflush(stdin);
    printf("Do you want to add another(y/n)?");
    scanf("%c",&ch);
}while(ch=='y');
do
{
printf("Enter value of new node:");
scanf("%d",&m);
printf("After which value the node is to be iserted:");
scanf("%d",&o);
ptr1=(struct node*)malloc(sizeof(struct node));
ptr1->info=m;
ptr1->next=NULL;
end=go=v;
if(o==ptr->info)
    {
        ptr->next=ptr1;
    ptr=ptr1;
    }
else
{
    while(end!=NULL)
    {

    if(end->info==o)
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
printf("Values in the new linked list with their positions are:");
while(go!=NULL)
{
    printf("\n %d   %d",go->info,go->next);
    go=go->next;
}
fflush(stdin);
printf("\n\nDO you want to try again(y/n):");
scanf("%c",&c);
}while(c=='y');
}





