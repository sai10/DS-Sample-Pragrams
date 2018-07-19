#include<stdio.h>
#include<stdlib.h>
int i=-1,a[10];
void main()
{
    int n,m,choice;
    char ch;
   do
    {
        system("cls");
    printf("\n\t******************");
    printf("\n\t STACK OPERATIONS");
    printf("\n\t******************");
    printf("\n\t (1)PUSH");
    printf("\n\t (2)POP");
    printf("\n\t (3)PEEP");
    printf("\n\t (4)DISPLAY");
    printf("\n\t (5)MODIFY");
    printf("\n\t (6)EXIT");
    printf("\n\n     ENTER YOUR CHOICE:");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("Enter the number to be pushed into the stack:");
        scanf("%d",&n);
        push(a,n);
        fflush(stdin);
        break;
    case 2:
        pop(a,n);
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
    //system("cls");
    printf("\n\n    DO YOU WANT TO TRY OTHER OPERATIONS(y/n)?:");
    scanf("%c",&ch);
}while(ch=='y');
}
 void push(int a[],int n)
{
    if(i==9)
        {printf("\nSTACK OVERFLOW");}
    else
    {
        i++;
        a[i]=n;

    }
}
void pop(int a[],int n)
{
    if(i==-1)
        printf("\nSTACK UNDERFLOW");
    else
    {
        n=a[i];
        i--;
        printf("\n %d  DELETED SUCCESSFULLY",n);
    }
}
void peek(int a[],int n)
{
    if(i==-1)
        printf("\nUNDER FLOW-STACK IS EMPTY");
    else
        printf("Value stored in the top of stack is:%d",a[i]);
}
void display(int a[],int n)
{
    int j;
    if(i==-1)
        printf("\n\tSTACK IS EMPTY");
    else
    {
        for(j=i;j>=0;j--)
            printf(" %d",a[j]);
    }
}
void modify(int a[],int n)
{
    int j;
    printf("\nEnter the position for modification:");
    scanf("%d",&j);
    printf("\n i=%d   j=%d\n\n",i,j);
    if(i==-1)
        printf("\nSORRY CANT BE DONE");
    else
    {
        if(i==j-1)
            {
                a[i]=n;
    printf("\nMODIFICATION DONE");
    }
    }
}
