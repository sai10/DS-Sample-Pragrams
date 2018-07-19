

///                  ALL ELEMENTS STORED SHOULD BE IN SORTED MANNER (EITHER ASCENDING OR DESCENDING)

//                   ALSO KNOWN AS EXTRAPOLATION SEARCH

#include<stdio.h>
void main()
{
    int arr[100],num,i,n,temp=0,low,high,mid;
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
    while(low<=high)
    {
        mid=low+(high-low)*((num-arr[low])/(arr[high]-arr[low]));
        if(arr[mid]==num)
        {
            printf("\n %d found and its position is = %d",num,mid);
            temp=1;
            break;
        }
        else if(arr[mid]>num)
            high=mid-1;
        else
            low=mid+1;
    }
    if(temp==0)
        printf("\nVALUE IS NOT FOUND\n\n");
}

