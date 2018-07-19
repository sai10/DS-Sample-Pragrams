#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *next;
};
void main()
{
 int n,m,k=0,a=0,o;
    struct node *ptr,*start=NULL,*end;
    char ch,c;
do
{
    a=0;
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
    a++;
    fflush(stdin);
    printf("Do you want to add another(y/n)?");
    scanf("%c",&ch);
}while(ch=='y');
/*while(end!=NULL)
{                                            "OPTIONAL PART"
    c++;
    end=end->next;
}*/
printf("\nNUMBER OF NODES ARE:: %d",a);

fflush(stdin);
printf("\n\nDo you want Try for another linked list(y/n)?");
scanf("%c",&c);
}while(c=='y');
}

