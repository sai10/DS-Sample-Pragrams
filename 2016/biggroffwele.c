#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,*p,i,large;
 printf("Enter the number of numbers to be stored:");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    printf("Enter %d numbers:",n);
    for(i=0;i<n;i++)
        scanf("%d",p+i);
    for(i=1;i<n;i++)
    {
        if(*(p+i-1)<(*(p+i)))
            large=*(p+i);
    }
    printf("Bigger of %d elements is %d",n,large);
}
