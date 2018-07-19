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
    struct node *ptr,*start=NULL,*end,*go,*s,*ptr1;
    char ch;
do
{
    printf("Enter a number:");
    scanf("%d",&n);
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->info=n;
    ptr->next=NULL;
   if(start==NULL)
        go=end=start=ptr;
    else
    {
        start->next=ptr;
        start=ptr;
    }
    fflush(stdin);
    printf("Do you want to add another(y/n)?");
    scanf("%c",&ch);
}while(ch=='y');
printf("Enter the node so as to delete the next node:");
scanf("%d",&o);
if(o==1)
    {
     end=end->next;
        ptr1=end;
        go->next=end->next;
    }
else
{
   s=end;
    while(k!=o)
    {
        k++;
 s=end;
    end=end->next;
    ptr1=end;
    }
    s->next=end->next;

}
printf("Values in the new linked list with their positons are:");
while(go!=NULL)
{
    printf("\n %d   %d",go->info,go->next);
    go=go->next;
}
free(ptr1);
}


