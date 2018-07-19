#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<process.h>
struct node
{
    int info;
    struct node *next;
};

void main()
{
    int choice;
    char ch;
    do
    {
        printf("\n\n\n\txxxxxxxxxxxxxxxXXXXXXXXXXXXXXXXXXXxxxxxxxxxxxxxxxx");
        printf("\n\t   L I N K E D   L I S T S  O P E R A T I O N S");
        printf("\n\txxxxxxxxxxxxxxxXXXXXXXXXXXXXXXXXXXxxxxxxxxxxxxxxxx");
        printf("\n\n  1-  < Traverse >");
        printf("\n\n  2-  < Count Number of Nodes >");
        printf("\n\n  3-  < Searching a Particular Value >");
        printf("\n\n  4-  < Insert a Node at Beginning >");
        printf("\n\n  5-  < Insert a Node at End >");
        printf("\n\n  6-  < Insert a Node After Node of Users Choice >");
        printf("\n\n  7-  < Insert a Node Before Node of Users Choice >");
        printf("\n\n  8-  < Insert a Node After Value of Users Choice >");
        printf("\n\n  9-  < Insert a Node Before Value of Users Choice >");
        printf("\n\n  10- < Delete a Node of users choice >");
        printf("\n\n  11- < Delete a Node at Beginning >");
        printf("\n\n  12- < Delete a Node at End >");
        printf("\n\n  13- < Delete a Node After Node of Users Choice >");
        printf("\n\n  14- < Delete a Node After Value of Users Choice >");
        printf("\n\n  15- < Delete a Node Before Node of Users Choice >");
        printf("\n\n  16- < Delete a Node Before Value of Users Choice >");
        printf("\n\n  17-  < EXIT >");
        printf("\n\n       ENTER   YOUR   CHOICE:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                traverse();
                printf("\nTRAVERSING DONE");
                break;
            case 2:
                count();
                printf("\nCOUNTING DONE SUCCESSFULLY");
                break;
            case 3:
                srch();
                printf("\nSEARCHING DONE SUCCESSFULLY");
                break;
            case 4:
                insbeg();
                printf("\nINSERTING AT BEGINNING DONE SUCCESSFULLY");
                break;
            case 5:
                insend();
                printf("\nINSERTING AT END DONE SUCCESSFULLY");
                break;
            case 6:
                ins1();
                printf("\nINSERTING AFTER THE NODE OF USERS CHOICE DONE SUCCESSFULLY");
                break;
            case 7:
                ins2();
                printf("\nINSERTING BEFORE THE NODE OF USERS CHOICE DONE SUCCESSFULLY");
                break;
            case 8:
                ins3();
                printf("\nINSERTING AFTER THE VALUE OF USERS CHOICE DONE SUCCESSFULLY");
                break;
            case 9:
                ins4();
                printf("\nINSERTING BEFORE THE VALUE OF USERS CHOICE DONE SUCCESSFULLY");
                break;
            case 10:
                del();
                printf("\nDELETE SUCCESSFUL");
                break;
            case 11:
                delbeg();
                printf("\nBEGINNING NODE DELETED SUCCESSFULLY");
                break;
            case 12:
                delend();
                printf("\nEND NODE DELETED SUCCESSFULLY");
                break;
            case 13:
                del1();
                printf("\nNODE AFTER THE NODE OF USERS CHOICE DELETED SUCCESSFULLY");
                break;
            case 14:
                del2();
                printf("\nNODE AFTER THE VALUE OF USERS CHOICE DELETED SUCCESSFULLY");
                break;
            case 15:
                del3();
                printf("\nNODE BEFORE THE NODE OF USERS CHOICE DELETED SUCCESSFULLY");
                break;
            case 16:
                del4();
                printf("\nNODE BEFORE THE VALUE OF USERS CHOICE DELETED SUCCESSFULLY");
                break;
            default:
                printf("\n\n                  THANK  YOU  FOR  YOUR  TIME\n\n");
                exit(0);

        }
        fflush(stdin);
        printf("\n\n  DO YOU WANT TO TRY OTHER OPERATIONS(y/n)?:");
        scanf("%c",&ch);
    }while(ch=='y');
}
void traverse()
{
    int n,m,k=0,o,c=0;
    struct node *ptr,*start=NULL,*end,*go,*ptr1,*s,*v;
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
printf("Entered Elements Are:");
while(end!=NULL)
{
    printf("\n %d",end->info);
    end=end->next;
}
}

void count()
{int n,m,k=0,o,c=0;
    struct node *ptr,*start=NULL,*end,*go,*ptr1,*s,*v;
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
printf("\nNUMBER OF NODES ARE:: %d",c);
}

void srch()
{int n,m,k=0,o,c=0;
    struct node *ptr,*start=NULL,*end,*go,*ptr1,*s,*v;
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

void insbeg()
{int n,m,k=0,o,c=0;
    struct node *ptr,*start=NULL,*end,*go,*ptr1,*s,*v;
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

void insend()
{int n,m,k=0,o,c=0;
    struct node *ptr,*start=NULL,*end,*go,*ptr1,*s,*v;
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
ptr1->next=NULL;
ptr->next=ptr1;
printf("Values in the new linked list with their positons are:");
while(end!=NULL)
{
    printf("\n %d   %d",end->info,end->next);
    end=end->next;
}
}

void ins1()
{int n,m,k=0,o,c=0;
    struct node *ptr,*start=NULL,*end,*go,*ptr1,*s,*v;
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
    c++;
    fflush(stdin);
    printf("Do you want to add another(y/n)?");
    scanf("%c",&ch);
}while(ch=='y');
printf("Entered value of new node:");
scanf("%d",&m);
printf("In which place to isert the node:");
scanf("%d",&o);
ptr1=(struct node*)malloc(sizeof(struct node));
ptr1->info=m;
ptr1->next=NULL;
if(o==c)
    ptr->next=ptr1;
else
{
    while(end!=NULL)
    {
    k++;
    if(k==o)
    {
    s=end->next;
    end->next=ptr1;
    end=ptr1;
    end->next=s;
    break;
    }
    end=end->next;
    }
}
printf("Values in the new linked list with their positons are:");
while(go!=NULL)
{
    printf("\n %d   %d",go->info,go->next);
    go=go->next;
}
}

void ins2()
{int n,m,k=0,o,c=0;
    struct node *ptr,*start=NULL,*end,*go,*ptr1,*s,*v;
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
printf("In which place to isert the node:");
scanf("%d",&o);
ptr1=(struct node*)malloc(sizeof(struct node));
ptr1->info=m;
ptr1->next=NULL;
if(o==1 )
    {
        s=end->next;
        ptr1->next=go;
       go=end=ptr1;
    }
else
{
    while(end!=NULL)
    {
    k++;
    if(k==o-1)
    {
    s=end->next;
    end->next=ptr1;
    end=ptr1;
    end->next=s;
    break;
    }
    end=end->next;
    }
}
printf("Values in the new linked list with their positons are:");
while(go!=NULL)
{
    printf("\n %d   %d",go->info,go->next);
    go=go->next;
}
}

void ins3()
{int n,m,k=0,o,c=0;
    struct node *ptr,*start=NULL,*end,*go,*ptr1,*s,*v;
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
printf("After which value the node is to be iserted:");
scanf("%d",&o);
ptr1=(struct node*)malloc(sizeof(struct node));
ptr1->info=m;
ptr1->next=NULL;
if(o==ptr->info)
    ptr->next=ptr1;
else
{
    while(end!=NULL)
    {

    if(end->info==o)
    {
    s=end->next;
    end->next=ptr1;
    end=ptr1;
    end->next=s;
    break;
    }
    end=end->next;
    }
}
printf("Values in the new linked list with their positons are:");
while(go!=NULL)
{
    printf("\n %d   %d",go->info,go->next);
    go=go->next;
}
}
void ins4()
{int n,m,k=0,o,c=0;
    struct node *ptr,*start=NULL,*end,*go,*ptr1,*s,*v;
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
printf("Enter the value before which you want to isert the node:");
scanf("%d",&o);
ptr1=(struct node*)malloc(sizeof(struct node));
ptr1->info=m;
ptr1->next=NULL;
if(o==end->info )
    {
        s=end->next;
        ptr1->next=go;
       go=end=ptr1;
    }
else
{
    while(end!=NULL)
    {
    k++;
    if(o==end->info)
    {
    s=v->next;
    v->next=ptr1;
    v=ptr1;
    v->next=s;

    }
    v=end;
    end=end->next;

    }
}
printf("Values in the new linked list with their positons are:");
while(go!=NULL)
{
    printf("\n %d   %d",go->info,go->next);
    go=go->next;
}
}

void del()
{int n,m,k=0,o,c=0;
    struct node *ptr,*start=NULL,*end,*go,*ptr1,*s,*v;
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
printf("Enter the node to delete the node:");
scanf("%d",&o);
if(o==1)
    go=end=end->next;
else
{
    while(end!=NULL)
    {
    k++;
    if(k==o)
    {
        if(end->next==NULL)
    {
        ptr1=end;
        s->next=NULL;
    break;
    }
        else
    {
     ptr1=end;
     s->next=end->next;
     break;
    }
    }

    s=end;
    end=end->next;
    }
}
printf("Values in the new linked list with their positons are:");
while(go!=NULL)
{
    printf("\n %d   %d",go->info,go->next);
    go=go->next;
}
free(ptr1);
}

void delbeg()
{int n,m,k=0,o,c=0;
    struct node *ptr,*start=NULL,*end,*go,*ptr1,*s,*v;
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
printf("After deleting the beginning node Values in the Linked list are:");
ptr1=end;
go=end=end->next;
while(go!=NULL)
{
    printf("\n %d   %d",go->info,go->next);
    go=go->next;
}
free(ptr1);
}

void delend()
{int n,m,k=0,o,c=0;
    struct node *ptr,*start=NULL,*end,*go,*ptr1,*s,*v;
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
printf("After deleting the end node Values in the Linked list are:");
while(end!=NULL)
{
    if(end->next==NULL)
    {
        ptr1=end;
        s->next=NULL;
        break;
    }
    s=end;
    end=end->next;
}
while(go!=NULL)
{
    printf("\n %d   %d",go->info,go->next);
    go=go->next;
}
free(ptr1);
}
void del1()
{int n,m,k=0,o,c=0;
    struct node *ptr,*start=NULL,*end,*go,*ptr1,*s,*v;
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
printf("Enter the node so as to delete the next node:");
scanf("%d",&o);
if(o==1)
    {
        ptr1=end;
     end=end->next;
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
printf("Values in the new linked list with their positons are:");
while(go!=NULL)
{
    printf("\n %d   %d",go->info,go->next);
    go=go->next;
}
free(ptr1);
}

void del2()
{int n,m,k=0,o,c=0;
    struct node *ptr,*start=NULL,*end,*go,*ptr1,*s,*v;
    char ch;
do
{
    printf("Enter a number:");
    scanf("%d",&n);
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->info=n;
    ptr->next=NULL;
   if(start==NULL)
       v= go=end=start=ptr;
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
printf("Enter the value so as to delete the next node:");
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
    while(s->info!=o)
    {
        k++;
     s=end;
     end=end->next;
    ptr1=end;
    }
    s->next=end->next;
        if(c==k+1)
            s->next=NULL;

}
printf("Values in the new linked list with their positons are:");
while(go!=NULL)
{
    printf("\n %d   %d",go->info,go->next);
    go=go->next;
}
free(ptr1);
}

void del3()
{int n,m,k=0,o,c=0;
    struct node *ptr,*start=NULL,*end,*go,*ptr1,*s,*v;
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

void del4()
{int n,m,k=0,o,c=0;
    struct node *ptr,*start=NULL,*end,*go,*ptr1,*s,*v;
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
