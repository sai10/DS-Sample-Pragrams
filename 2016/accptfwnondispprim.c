#include<stdio.h>
void main()
{
    int i,j,*p,c=0,n;
    printf("Enter number of numbers to be stored:");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    printf("Enter  numbers:");
    for(i=0;i<n;i++)
        scanf("%d",p+i);
    printf("Prime numbers are:");
    for(i=0;i<n;i++)
    {
        for(j=1;j<=*(p+i);j++)
        {
            if(*(p+i)%j==0)
                c++;
        }
        if(c<=2 && c!=1 && c!=0)
        printf(" %d",*(p+i));
        c=0;
    }
}
