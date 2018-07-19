#include<stdio.h>
#include<stdlib.h>
int front=-1,rear=-1,a[10];
void main()
{
    int n,m,choice;
    char ch;
   do
    {
    printf("\n\t******************");
    printf("\n\t STACK OPERATIONS");
    printf("\n\t******************");
    printf("\n\t (1)INSERT");
    printf("\n\t (2)DELETE");
    printf("\n\t (3)PEEP");
    printf("\n\t (4)DISPLAY");
    printf("\n\t (5)MODIFY");
    printf("\n\t (6)EXIT");
    printf("\n\n     ENTER YOUR CHOICE:");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("Enter the number to be inserted into the queue:");
        scanf("%d",&n);
        insert(a,n);
        fflush(stdin);
        break;
    case 2:
        delete(a,n);
        fflush(stdin);
        break;
    case 3:
        peek(a,n);
        break;
    case 4:
        display(a);
        break;
    case 5:
        printf("Enter the new number");
        scanf("%d",&m);
        modify(a,m);
        break;
    default:
        exit(0);
            }
    fflush(stdin);
    system("cls");
    printf("\n\n    DO YOU WANT TO TRY OTHER OPERATIONS(y/n)?:");
    scanf("%c",&ch);
}while(ch=='y');
}
 void insert(int a[],int n)
{
    if(rear==9)
        {printf("\nQUEUE OVERFLOW");}
    else if(front==-1&&rear==-1)
    front=rear=0;
    else
    {
        rear++;
        a[rear]=n;
    }
}
void delete(int a[],int n)
{
    if(front==-1||front>rear)
        printf("\nQUEUE UNDERFLOW");
    else
    {
        n=a[front];
        front++;
        printf("\n %d  QUEUE SUCCESSFULLY",n);
        if(front>rear)
            front=rear=-1;
    }
}
void peek(int a[],int n)
{
    if(front==-1||front>rear)
        printf("\nUNDER FLOW-QUEUE IS EMPTY");
    else
        printf("Value stored in the top of stack is:%d",n);
}
void display(int a[],int n)
{
    int j;
    if(front==-1||front>rear)
        printf("\n\tQUEUE IS EMPTY");
    else
    {
        for(j=front;j<=rear;j++)
            printf(" %d",a[j]);
    }
}
void modify(int a[],int n)
{
    int j;
    printf("\nEnter the position for modification:");
    scanf("%d",&j);
    if(front==-1)
        printf("\nSORRY CANT BE DONE");
    else
    {
        if(rear==j)
            a[rear]=n;
    printf("\nMODIFICATION DONE");
    }
}
