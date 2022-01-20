#include<stdio.h>
void main()
{
    int a[100],n,i,l;
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
    l=a[0];
    for(i=0;i<n;i++)
    {
      if(a[i]<l)
      {
        l=a[i];
      }


    }
    printf("%d is small",l);
    
}