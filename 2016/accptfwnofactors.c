#include<stdio.h>
void main()
{
    int n,*p,i,j;
      printf("Enter the number of numbers to be stored:");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    printf("Enter %d numbers:",n);
    for(i=0;i<n;i++)
        scanf("%d",p+i);

    for(i=0;i<n;i++)
    {
        printf("\nFactors of %d\n",*(p+i));
        for(j=1;j<=*(p+i);j++)
        {
            if(*(p+i)%j==0)
                printf("\n%d",j);
        }
    }
}
