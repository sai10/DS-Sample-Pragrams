
#include<stdio.h>
void main()
{
    int *p,i,n;
    printf("Enter the number of numbers to be displayed:");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    printf("Enter %d numbers:",n);
    for(i=0;i<n;i++)
        scanf("%d",p+i);
    printf("You have entered");
    for(i=0;i<n;i++)
        printf(" %d",*(p+i));
}
