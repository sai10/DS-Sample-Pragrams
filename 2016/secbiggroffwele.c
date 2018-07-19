#include<stdio.h>
void main()
{
    int n,*p,i,large=-9999,lrg=-99999;
     printf("Enter the number of numbers to be stored:");
    scanf("%d",&n);
     p=(int*)malloc(n*sizeof(int));
    printf("Enter %d numbers:",n);
    for(i=0;i<n;i++)
        scanf("%d",p+i);
    for(i=0;i<n;i++)
    {
        if(large<*(p+i))
            large=*(p+i);
    }
     for(i=0;i<n;i++)
    {
            if(*(p+i)!=large)
        {
            if(lrg<*(p+i))
                lrg=*(p+i);
        }
    }
    printf("Second largest number is: %d",lrg);
}



