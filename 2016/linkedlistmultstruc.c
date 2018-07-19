#include<stdio.h>
#include<stdlib.h>
struct node
{
    int roll,pin;
    float sub1,sub2,sub3,TM,p;
    char name[30],city[30],state[30];
    struct node *next;
};
void main()
{
    int n,p,i;
    float s1,s2,s3,t,per;
    char fname[30],pname[30],rname[30];
    struct node *ptr,*start=NULL,*end,s;
    char ch;
do
{
    printf("Enter roll number:");
    scanf("%d",&n);
    fflush(stdin);
    printf("Enter name:");
    gets(fname);
    printf("Enter City name:");
    gets(pname);
    printf("Enter state name:");
    gets(rname);
    printf("Enter pin code:");
    scanf("%d",&p);
    printf("Enter marks of sub1:");
    scanf("%f",&s1);
    printf("Enter marks of sub2:");
    scanf("%f",&s2);
    printf("Enter marks of sub3:");
    scanf("%f",&s3);
    t=s1+s2+s3;
    per=t/3;
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->roll=n;
    for(i=0;fname[i]!='\0';i++)
    ptr->name[i]=fname[i];
    for(i=0;pname[i]!='\0';i++)
        ptr->city[i]=pname[i];
    for(i=0;rname[i]!='\0';i++)
        ptr->state[i]=rname[i];
    ptr->pin=p;
    ptr->next=NULL;
    ptr->sub1=s1;
    ptr->sub2=s2;
    ptr->sub3=s3;
    ptr->TM=t;
    ptr->p=per;
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
    printf("\n\nROLL NUMBER=%d\nNAME=%s\nCITY=%s\nSTATE=%s\n%d\nSUB1=%f\nSUB2=%f\nSUB3=%f\nTOTAL MARKS=%f\nPERCENTAGE=%f\n\n",end->roll,end->name,end->city,end->state,end->pin,end->sub1,end->sub2,end->sub3,end->TM,end->p);
    end=end->next;
}
}

