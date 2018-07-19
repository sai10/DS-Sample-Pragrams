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

printf("In which place to delete the node:");
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



