 #include<stdio.h>
 void main()
 {
     int a[100],n,s,i;
     printf("Specify Number of Elements To Be Stored:");
     scanf("%d",&n);
     printf("Enter the elements to be stored:");
     for(i=0;i<n;i++)
        scanf("%d",&a[i]);
     printf("Enter the position from which it is to be deletd:");
     scanf("%d",&s);
     for(i=s;i<n;i++)
        a[i]=a[i+1];
    n--;
    printf("Array After deletion is:");
     for(i=0;i<n;i++)
        printf("  %d",a[i]);
 }


