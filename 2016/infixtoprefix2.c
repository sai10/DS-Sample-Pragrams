
//             CONVERT     ((A+B)*C/D+E^F)/G     TO ITS POSTFIX EXPRESSION i.e. /+/*+ABCD^EFG


#include <stdio.h>
void main()
{
    int l,c=0,i=0,k=2,j=0;
    char infix[30],prefix[30],temp;
    printf("Enter the expression:");
    gets(infix);
    l=strlen(infix);
    strcpy(prefix,infix);
    if(prefix[0]=='(' && prefix[14]==')')
    {
       if(prefix[1]=='('&& prefix[5]==')')
    {
         temp=prefix[2];
        prefix[2]=prefix[3];
        prefix[3]=temp;
    }
    }
    for(i=1;prefix[i]!='\0';i++)
          prefix[i]=prefix[i+1];
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
      i=10;
   while(prefix[i]!='\0')
    {
        if(prefix[i]=='^')
        {
        temp=prefix[i];
        prefix[i]=prefix[i-1];
        prefix[i-1]=temp;
        i++;
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
       for(i=c-1;i>1;i--)
          prefix[i]=prefix[i-1];
       prefix[i]=temp;
       break;
        }
        i++;
    }
   i=0;j=0;
   while(prefix[i]!='\0')
    {
        if(prefix[i]=='/'&& j==6)
        {
        temp=prefix[i];
        for(j=6;j>0;j--)
        prefix[j]=prefix[j-1];
        break;
        }
        i++;j++;
   }
    prefix[1]=temp;
    i=0;j=0;
     while(prefix[i]!='\0')
    {
        if(prefix[i]=='+'&& j==8)
        {
           temp=prefix[i];
           for(j=8;j>0;j--)
           prefix[j]=prefix[j-1];
       }
        i++;j++;
    }
    prefix[1]=temp;
      for(i=0;prefix[i]!='\0';i++)
          prefix[i]=prefix[i+1];
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
i=0;j=0;
   while(prefix[i]!='\0')
    {
        if(prefix[i]=='/'&& j==11)
        {
        temp=prefix[i];
        for(j=11;j>=0;j--)
        prefix[j]=prefix[j-1];
        break;
        }
        i++;j++;
   }
    prefix[0]=temp;
    prefix[l]='\0';
    printf("THE PREFIX EXPRESSIN IS:   %s ",prefix);
}
