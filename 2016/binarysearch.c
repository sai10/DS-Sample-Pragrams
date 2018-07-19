

///                    ALL ELEMENTS STORED SHOULD BE IN SORTED MANNER (EITHER ASCENDING OR DESCENDING)

#include<stdio.h>
void main()
{
    int arr[100],num,i,n,temp=0,beg,end,mid;
    printf("Enter number of elements to be stored in array:");
    scanf("%d",&n);
    printf("\nEnter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nEnter the element to be searched:");
    scanf("%d",&num);
    beg=0;
    end=n-1;
    while(beg<=end)
    {
        mid=(beg+end)/2;
        if(arr[mid]==num)
        {
            printf("\n %d found and its position is = %d",num,mid);
            temp=1;
            break;
        }
        else if(arr[mid]>num)
            end=mid-1;
        else
            beg=mid+1;
    }
    if(temp==0)
        printf("\nVALUE IS NOT FOUND\n\n");
}
