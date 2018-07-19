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
printf("Enter the value so as to delete the previous node:");
scanf("%d",&o);
if(ptr->info==o)
    {
      while(end!=NULL)
      {
          k++;
          if(k==3 && end==ptr)
                    v=ptr;

          if(end->next==ptr)
                {
                     s->next=ptr;
                }
        s=end;
        end=end->next;
      }
    }
else
{go=go->next;
    while(end!=NULL || go!=NULL)
    {
        k++;
       if(k==2 || go->info==o)
        {
         go=v=end=end->next;
        break;
        }
   if(go->info==o)
   {
       s->next=go;
       break;
   }
   s=end;
   go=go->next;
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

