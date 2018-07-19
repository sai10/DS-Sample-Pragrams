#include<stdio.h>
void main()
{
    int a[10][10],sp[10][3];
    int i,j,k,t,p,n;
    printf("Enter the order of matrix:");
    scanf("%d%d",&p,&n);
    printf("\nEnter %d elements:",p*n);
    for(i=0;i<p;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    k=1;t=0;
    for(i=0;i<p;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]!=0)
            {
                sp[k][0]=i;
                sp[k][1]=j;
                sp[k][2]=a[i][j];
                k++;t++;
            }
        }
    }
    sp[0][0]=p;
    sp[0][1]=n;
    sp[0][2]=t;
    printf("\nORDER OF MATRIX a : %d X %d\n",p,n);
    for(i=0;i<p;i++)
    {
        for(j=0;j<n;j++)
            printf("\t%d",a[i][j]);
        printf("\n");
    }
    printf("\nSPARSE MATRIX REPRESENTATION:\n");
    for(i=0;i<=t;i++)
    {
        for(j=0;j<n;j++)
            printf("\t%d",sp[i][j]);
        printf("\n");
    }
}

