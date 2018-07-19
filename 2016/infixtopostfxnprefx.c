
/*               CONVERT     (A+B)*C/D     TO ITS POSTFIX EXPRESSION i.e. AB+C*D/
                                 and       TO ITS PREFIX EXPRESSION i.e. *+AB/CD                               */


#include <stdio.h>
void main()
{
   int c,l;
    char infix[30],infix1[30];
    printf("\n\n\tENTER THE EXPRESSION TO FINDS ITS POSTFIX AND PREFIX EXPRESSION=");
    printf("\n\nEnter the expression:");
    gets(infix);
     c=strlen(infix);l=c;
     strcpy(infix1,infix);
    getch();
    post(infix,c);
    pre(infix1,c);
}
void post(char postfix[],int c)
{
        int i=0;
    char temp;
    if(postfix[0]=='('&& postfix[4]==')')
    {
        temp=postfix[2];
        postfix[2]=postfix[3];
        postfix[3]=temp;
    }
   while(postfix[i]!='\0')
    {
        postfix[i]=postfix[i+1];
        i++;
    }
    i=0;
   while(postfix[i]!='\0')
    {
        if(postfix[i]==')')
        {
            while(postfix[i]!='\0')
            {
                postfix[i]=postfix[i+1];
                i++;
            }
            break;
        }
        i++;
    }
        i=0;
   while(postfix[i]!='\0')
    {
        if(postfix[i]=='*')
        {
        temp=postfix[i];
        postfix[i]=postfix[i+1];
        postfix[i+1]=temp;
        i++;
        }
        i++;
    }
i=0;
   while(postfix[i]!='\0')
    {
        if(postfix[i]=='/')
        {
        temp=postfix[i];
        postfix[i]=postfix[i+1];
        postfix[i+1]=temp;
        i++;
        }
        i++;
    }
    postfix[i]='\0';
    printf("\nSO POSTFIX EXPRESSION IS:\n");
    printf("\t%s\n",postfix);
}

void pre(char prefix[],int l)
{
    int i=0,c=0;
    char temp;
    if(prefix[0]=='('&& prefix[4]==')')
    {
        temp=prefix[1];
        prefix[1]=prefix[2];
        prefix[2]=temp;
    }
    while(prefix[i]!='\0')
    {
        prefix[i]=prefix[i+1];
        i++;
    }
    i=0;
   while(prefix[i]!='\0')
    {
        if(prefix[i]==')')
        {
            while(prefix[i]!='\0')
            {
                prefix[i]=prefix[i+1];
                i++;
            }
            break;
        }
        i++;
    }
    i=0;
   while(prefix[i]!='\0')
    {
       c++;
        if(prefix[i]=='*')
        {
       temp=prefix[i];
       for(i=c-1;i>0;i--)
          prefix[i]=prefix[i-1];
       prefix[i]=temp;
       break;
        }
        i++;
    }
   for(i=l-1;i>=0;i--)
    {
        if(prefix[i]=='/')
        {
        temp=prefix[i];
        for(;prefix[i]!='\0';i++)
        prefix[i]=prefix[i+1];
        }
       else
        prefix[i+1]=prefix[i];
    }
    prefix[0]='/';
    prefix[l-2]='\0';
    printf("THE PREFIX EXPRESSIN IS:\n        %s",prefix);
}
