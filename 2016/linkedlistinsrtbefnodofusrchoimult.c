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
    struct node *ptr,*start=NULL,*end,*go,*ptr1,*s,*v,*t;
    char ch,c;
do
{
    printf("Enter a number:");
    scanf("%d",&n);
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->info=n;
    ptr->next=NULL;
    if(start==NULL)
        t=go=v=end=start=ptr;
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
   go=end=t;
printf("Entered value of new node:");
scanf("%d",&m);
printf("In which place to insert the node:");
scanf("%d",&o);
ptr1=(struct node*)malloc(sizeof(struct node));
ptr1->info=m;
ptr1->next=NULL;
    go=end;
if(o==1 )
    {
        ptr1->next=go;
       go=end=v=ptr1;
    }
else
{
        k=0;
    while(end!=NULL)
    {
    k++;
    if(k==o)
    {
        s->next=ptr1;
   ptr1->next=end;
    break;
    }
    s=end;
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
printf("\n\nDO you want to insert again(y/n):");
scanf("%c",&c);
}while(c=='y');
}

