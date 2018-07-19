#include<stdio.h>
void main()
{
    int n,*p,i,s=0,j;
    printf("Enter the number of numbers to be stored:");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    printf("Enter %d numbers:",n);
    for(i=0;i<n;i++)
        scanf("%d",p+i);
    printf("Perfect numbers are:");
    for(i=0;i<n;i++)
    {
        for(j=1;j<=*(p+i);j++)
            {


                    if(*(p+i)%j==0 && *(p+i)!=0 )

               {
                   s=s+j;
               }
            }
       if(s==2**(p+i) && *(p+i)!=0)
        printf(" %d",*(p+i));
        s=0;
    }

}

