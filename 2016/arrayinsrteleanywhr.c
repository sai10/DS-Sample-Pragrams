 #include<stdio.h>
 void main()
 {
     int a[100],n,m,s,i;
     printf("Specify Number of Elements To Be Stored:");
     scanf("%d",&n);
     printf("Enter the elements to be stored:");
     for(i=0;i<n;i++)
        scanf("%d",&a[i]);
     printf("Enter the new element to be stored:");
     scanf("%d",&m);
     printf("Enter the place where it is to be stored:");
     scanf("%d",&s);
     for(i=n;i>=s;i--)
        a[i+1]=a[i];
    a[s]=m;
    n++;
     for(i=0;i<n;i++)
        printf("  %d",a[i]);
 }

