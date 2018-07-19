
#include<stdio.h>
void main()
{
    int arr[100],num,i,n,temp=0;
    printf("Enter number of elements to be stored in array:");
    scanf("%d",&n);
    printf("\nEnter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nEnter the element to be searched:");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(arr[i]==num)
          {
              temp=1;
              printf("\n%d found and its position is=%d",num,i);
              break;
          }
    }
    if(temp==0)
        printf("\nVALUE NOT IN THE RECORD");
}
