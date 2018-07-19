
//               CONVERT     (A+B)*C/D     TO ITS POSTFIX EXPRESSION i.e. AB+C*D/

#include <stdio.h>
void main()
{
    int c,i=0;
    char infix[30],postfix[30],temp;
    printf("Enter the expression:");
    gets(infix);
    c=strlen(infix);
    strcpy(postfix,infix);
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
