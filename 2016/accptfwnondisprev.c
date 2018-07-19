#include<stdio.h>
void main()
{
    int i,*p,n;
    printf("Enter number of numbers to be stored:");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    printf("Enter %d numbers:",n);
    for(i=0;i<n;i++)
        scanf("%d",p+i);
    printf("In reverse order:");
    for(i=n-1;i>=0;i--)
        printf(" %d",*(p+i));
}
