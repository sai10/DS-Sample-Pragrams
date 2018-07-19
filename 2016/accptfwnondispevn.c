#include<stdio.h>
void main()
{
    int *p,i,n;
    printf("Enter the number of numbers to be stored:");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    printf("Enter %d numbers:",n);
    for(i=0;i<n;i++)
        scanf("%d",p+i);

    printf("Even numbers are:");
    for(i=0;i<n;i++)
    {
        if(*(p+i)%2==0)
        printf(" %d",*(p+i));
    }
}
