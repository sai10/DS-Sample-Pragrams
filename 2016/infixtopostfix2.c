
//               CONVERT     ((A+B)*C/D+E^F)/G     TO ITS POSTFIX EXPRESSION i.e. AB+C*D/EF^+G/

#include <stdio.h>
void main()
{
    int c,i=0,k=2,j=0;
    char infix[30],postfix[30],temp;
    printf("Enter the expression:");
    gets(infix);
    c=strlen(infix);
    strcpy(postfix,infix);
    if(postfix[0]=='(' && postfix[14]==')')
    {
       if(postfix[1]=='('&& postfix[5]==')')
    {
        temp=postfix[3];
        postfix[3]=postfix[4];
        postfix[4]=temp;
    }
    }
    hell:
        i=0;
    k--;
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
     if(k!=0)
     {
    i=10;
   while(postfix[i]!='\0')
    {
        if(postfix[i]=='^')
        {
        temp=postfix[i];
        postfix[i]=postfix[i+1];
        postfix[i+1]=temp;
        i++;
        }
        i++;
    }
         i=4;
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
   i=8;
   while(postfix[i]!='\0')
    {
        if(postfix[i]=='+')
        {
        for(c=0;c<3;c++)
       {
           temp=postfix[i];
           postfix[i]=postfix[i+1];
           postfix[i+1]=temp;
        i++;
       }
        }
        i++;
    }
}
   if(k==1)
    goto hell;
i=0;
   while(postfix[i]!='\0')
    {
        if(postfix[i]=='/'&& j==11)
        {
        temp=postfix[i];
        postfix[i]=postfix[i+1];
        postfix[i+1]=temp;
        }
        i++;j++;
   }i++;
    postfix[i]='\0';
    printf("\nSO POSTFIX EXPRESSION IS:\n");
    printf("\t%s\n",postfix);
}

