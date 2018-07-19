
//               CONVERT     (A+B)*C/D     TO ITS PREFIX EXPRESSION i.e. *+AB/CD

#include<stdio.h>
void main()
{
    int i=0,c=0,l;
    char infix[30],prefix[30],temp;
    printf("ENTER THE EXPRESSION:");
    gets(infix);
    l=strlen(infix);
    strcpy(prefix,infix);
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
    printf("THE PREFIX EXPRESSIN IS:   %s",prefix);
}
