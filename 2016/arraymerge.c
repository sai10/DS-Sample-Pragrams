#include<stdio.h>
#include<conio.h>
void main()
{
    int arr1[10],arr2[10],arr3[20],number;
    int i,n1,n2,status=0,m,index=0,j,k;
    printf("\nEnter the number of elements in array1:");
    scanf("%d",&n1);
    printf("\nEnter the elements of 1st array:");
    for(i=0;i<n1;i++)
    {
        printf("\narr1[%d]=",i);
        scanf("%d",&arr1[i]);
    }
     printf("\nEnter the number of elements in array2:");
    scanf("%d",&n2);
    printf("\nEnter the elements of 2nd array:");
    for(i=0;i<n2;i++)
    {
        printf("\narr2[%d]=",i);
        scanf("%d",&arr2[i]);
    }
    m=n1+n2;
    for(i=0;i<n1;i++)
    {
        arr3[index]=arr1[i];
        index++;
    }
    for(i=0;i<n2;i++)
    {
        arr3[index]=arr2[i];
        index++;
    }
    printf("\n\nTHE MERGED ARRAY IS:");
    for(i=0;i<m;i++)
        printf("\narr[%d]=%d",i,arr3[i]);
        for(i = 0; i<  number-1; i++)
		for(j = i+1; j< number; j++)
		{
			if(arr3[i] == arr3[j])
			{
				number = number - 1 ;
				for(k = j; k<number; k++)
					arr3[k] = arr3[k+1];
				 status = 1;
				j = j - 1;
			}
		}
	if( status ==0)
		printf("\n No duplicate is found");
	return(number);
}
