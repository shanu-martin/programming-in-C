
#include<stdio.h>
void main()
{
    int a[100],n,i;
    printf("enter the limit of array :\t");
   scanf("%d",&n); 
    printf("enter array elements\n");
    for (i=0;i<n;i++)
    {
      scanf("%d",&a[i]);


    }
    printf("The Array Elements are :\n");
     for (i=n-1;i>=0;i--)
    {
      printf("%d\t",a[i]);


    }
    
}