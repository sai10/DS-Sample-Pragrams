#include <stdio.h>
void print(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	  printf("%d\t", a[i]);
}
void radix_sort(int a[], int n)
 {
	int i, b[100], m = 0, exp = 1;
	for (i = 0; i < n; i++)
    {
		if (a[i] > m)
		   m = a[i];
	}
	while (m / exp > 0)
    {
		int box[10] ={0};
		for (i = 0; i < n; i++)
		   box[a[i] / exp % 10]++;
		for (i = 1; i < 10; i++)
		   box[i] += box[i - 1];
		for (i = n - 1; i >= 0; i--)
		   b[--box[a[i] / exp % 10]] = a[i];
		for (i = 0; i < n; i++)
		   a[i] = b[i];
		exp *= 10;
	}
}
void main()
{
	int arr[100];
	int i, num;
	printf("\nEnter number of total elements: ");
	scanf("%d", &num);
	printf("\nEnter %d Elements : ", num);
	for (i = 0; i < num; i++)
	  scanf("%d", &arr[i]);
	radix_sort(&arr[0], num);
	printf("\nIN SORTED WAY : ");
	print(&arr[0], num);
}

