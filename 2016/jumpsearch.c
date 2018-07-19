

///                  ALL ELEMENTS STORED SHOULD BE IN SORTED MANNER (EITHER ASCENDING OR DESCENDING)

//                   ALSO KNOWN AS BLOCK SEARCH

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int arr[100],num,i,n,temp=0,low,high,step;

    printf("Enter number of elements to be stored in array:");
    scanf("%d",&n);
    printf("\nEnter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nEnter the element to be searched:");
    scanf("%d",&num);
    low=0;
    high=n-1;
   step=sqrt(n);
   for(i=0;i<step;i++)
   {
       if(num<arr[step])
        high=step-1;
       else
        low=step+1;

   }
  for(i=low;i<=high;i++)
   {
       if(arr[i]==num)
          {
              printf("\n %d found and position is=%d",num,i);
              temp=-1;
              break;
          }
   }
    if(temp==0)
        printf("\nVALUE IS NOT FOUND\n\n");
getch();
}


