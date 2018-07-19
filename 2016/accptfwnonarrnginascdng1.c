 #include<stdio.h>
 void main()
 {
     int *p,*q,i=0,j=0,k=0,*r,l;
     printf("Enter number of elements to be stored:");
     scanf("%d",&l);
    p=(int*)malloc(l*sizeof(int));
    q=(int*)malloc(l*sizeof(int));
     printf("Enter %d elements:",l);
     for(i=0;i<l;i++)
        {
          scanf("%d",p+i);
         (*(q+i))=(*(p+i));
        }
     printf("In ascending order it is:");
     for(i=0;i<l;i++)
     {
         k=0;
         for(j=0;j<l;j++)
         {
             if(*(p+i)<*(q+j))
               k++;
         }
             *(r+(l-k-1))=*(p+i);
      }
     for(i=0;i<l;i++)
     printf(" %d",*(r+i));
 }



