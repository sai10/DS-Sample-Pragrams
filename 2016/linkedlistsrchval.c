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
    struct node *ptr,*start=NULL,*end;
    char ch;
do
{
    printf("Enter a number:");
    scanf("%d",&n);
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->info=n;
    ptr->next=NULL;
    if(start==NULL)
        end=start=ptr;
    else
    {
        start->next=ptr;
        start=ptr;
    }
    fflush(stdin);
    printf("Do you want to add another(y/n)?");
    scanf("%c",&ch);
}while(ch=='y');
printf("Enter a number to be searched:");
scanf("%d",&m);
while(end!=NULL)
{
    if(m==end->info)
    {
        printf("\n %d found and its position =%d",end->info,end->next);
                break;
    }
    end=end->next;
}
}

