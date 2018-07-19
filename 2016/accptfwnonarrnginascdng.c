#include<stdio.h>
void main()
{
    int n,i=0,j=0,*p,temp;
    printf("Enter the number of number to be stored:");
    scanf("%d",&n);
    printf("Enter the %d numbers::",n);
    for(i=0;i<n;i++)
        scanf("%d",p+i);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(*(p+j)>*(p+j+1))
            {
                temp=*(p+j);
                *(p+j)=*(p+j+1);
                *(p+j+1)=temp;
            }
        }
    }
        printf("\nIn ascending order====");
        for(i=0;i<n;i++)
            printf(" %d",*(p+i));

}
