#include<stdio.h>
void main()
{
    int a[100],n,i,sum=0;
    printf("enter the limit of array :\t");
   scanf("%d",&n); 
    printf("enter array elements\n");
    for (i=0;i<n;i++)
    {
      scanf("%d",&a[i]);

    }
    printf("The Array Elements are :\n");
     for (i=0;i<n;i++)
    {
      printf("%d\t",a[i]);


    }
    printf("\n");
     for (i=0;i<n;i++)
    {
      sum=sum+a[i];


    }  
    printf("%d\t is our sum ",sum); 
}