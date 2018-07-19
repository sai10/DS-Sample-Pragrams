
//  + - 2 7 * 8 / 4 12 (evaluation of prefix expression)

#include<stdio.h>
int top=10,a[10];
void main()
{
    int i=0,r1,r2,r3,x,j=0;
    char prefix1[30],prefix[30],ch,choice;
    printf("Enter the expression:");
    gets(prefix1);
    for(i=strlen(prefix1)-1,j=0;i>=0,j<strlen(prefix1);i--,j++)
    prefix[j]=prefix1[i];
    prefix[j]='\0';
    printf("\n%s\n",prefix);
    i=0;
    while((ch=prefix[i])!='\0')
    {
        switch(ch)
        {
        case '/':
            r1=pop();
            r2=pop();
            r3=r2/r1;
            printf("\n%d\n",r3);
            push(r3);
            break;
        case '*':
            r1=pop();
            r2=pop();
            r3=r1*r2;
            printf("\n%d\n",r3);
            push(r3);
            break;
        case '-':
            r1=pop();
            r2=pop();
            r3=r2-r1;
            printf("\n%d\n",r3);
            push(r3);
            break;
        case '+':
            r1=pop();
            r2=pop();
            r3=r1+r2;
            printf("\n%d\n",r3);
            push(r3);
            break;
        default:
            printf("Enter the value of %c:",ch);
            scanf("%d",&x);
            fflush(stdin);
            push(x);
        }
i++;
    }

    r3=pop();
    printf("RESULT is:%d",r3);
}

void push(int x)
{
    if(top==0)
        printf("\nOVERFLOW");
    else
    {
        top--;
        a[top]=x;
    }
}
int pop()
{
    int x;
    if(top==10)
        printf("\nUNDERFLOW");
    else
    {
        x=a[top];
       top++;
    }
    return x;
}
