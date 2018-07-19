#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *next;
};
void main()
{
    int n,c=0;
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
    c++;
    fflush(stdin);
    printf("Do you want to add another(y/n)?");
    scanf("%c",&ch);
}while(ch=='y');
/*while(end!=NULL)
{                                            "OPTIONAL PART"
    c++;
    end=end->next;
}*/
printf("\nNUMBER OF NODES ARE:: %d",c);
}
