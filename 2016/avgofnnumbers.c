#include<stdio.h>
void main()
{
    int i,*p,n,s=0;
    float mean;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    printf("ENTER THE n NUMBERS:");
    for(i=0;i<n;i++)
        scanf("%d",p+i);
     for(i=0;i<n;i++)
        s=s+*(p+i);
     mean=(float)s/n;
     printf("\nMean of entered numbers is:%f",mean);
}
