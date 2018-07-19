 #include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *next;
};
void main()
{
    int n,m;
    struct node *ptr,*start=NULL,*end,*go,*ptr1;
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
printf("Entered value of new node:");
scanf("%d",&m);
ptr1=(struct node*)malloc(sizeof(struct node));
ptr1->info=m;
ptr1->next=end;
ptr=ptr1;
printf("Values in the new linked list with their positons are:");
while(ptr!=NULL)
{
    printf("\n %d   %d",ptr->info,ptr->next);
    ptr=ptr->next;
}
}

