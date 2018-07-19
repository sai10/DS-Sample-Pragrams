#include<stdio.h>
void main()
{
    int n,*p,i,j,e=1,s=0,d,temp;
     printf("Enter the number of numbers to be stored:");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    printf("Enter %d numbers:",n);
    for(i=0;i<n;i++)
        scanf("%d",p+i);
        printf("Strong numbers are:");
    for(i=0;i<10;i++)
    {
        temp=*(p+i);
       while(*(p+i)!=0)
       {
           d=*(p+i)%10;
           for(j=d;j>=1;j--)
           e=e*j;
           s=s+e;
           *(p+i)=*(p+i)/10;
           e=1;
       }
       if(temp==s && temp!=0)
        printf(" %d",s);
        s=0;
        e=1;
    }
}



