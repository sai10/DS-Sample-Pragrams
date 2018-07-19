 #include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *next;
};
void main()
{
 int n,m,k=1,o,c=0;
    struct node *ptr,*start=NULL,*end,*go,*s,*v,*ptr1;
    char ch;
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
    c++;
    fflush(stdin);
    printf("Do you want to add another(y/n)?");
    scanf("%c",&ch);
}while(ch=='y');
printf("Enter the node so as to delete the previous node:");
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
        go=v=end=end->next;
        break;}
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
printf("Values in the new linked list with their positons are:");
while(v!=NULL)
{
    printf("\n %d   %d",v->info,v->next);
    v=v->next;
}
free(ptr1);
}



