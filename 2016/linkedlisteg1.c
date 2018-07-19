#include<stdio.h>
struct node
{
    int info;
    struct node *next;
};
void main()
{
    struct node *ptr,*start=NULL;
    int n;
    char ch;
    do
    {
        printf("Enter the number:");
        scanf("%d",&n);
        ptr=(struct node*)malloc(sizeof(struct node));
        ptr->info=n;
        ptr->next=NULL;
        if(start==NULL)
            start=ptr;
        else
        {
            ptr->next=start;
            start=ptr;
        }
        fflush(stdin);
        printf("Do you want to add another(y/n)?:");
        scanf("%c",&ch);
    }while(ch=='y');
    printf("Numbers you have entered are:");
    while(start!=NULL)
    {
        printf("\n%d",start->info);
        start=start->next;
    }
}
