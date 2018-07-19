
//  2*(3+10)-8/2   to   2 3 10 + * 8 2 / -(evaluation of postfix expression)

#include<stdio.h>
int top=10,a[10];
void main()
{
    int i=0,r1,r2,r3,x;
    char postfix[30],ch,choice;
    printf("Enter the expression:");
    gets(postfix);
    while((ch=postfix[i])!='\0')
    {
        switch(ch)
        {
        case '+':
            r1=pop();
            r2=pop();
            r3=r1+r2;
            push(r3);
            break;
        case '-':
            r1=pop();
            r2=pop();
            r3=r2-r1;
            push(r3);
            break;
        case '*':
            r1=pop();
            r2=pop();
            r3=r2*r1;
            push(r3);
            break;
        case '/':
            r1=pop();
            r2=pop();
            r3=r2/r1;
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
