#include<stdio.h>
void main()
{
    int a[100][100],i,j,r,c;
    printf("enter arrays rows followed by number of columns:\n");
   scanf("%d%d",&r,&c); 
    printf("enter array elements\n");
    for (i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
      {
        scanf("%d",&a[i][j]);
      }
    }
    printf("the MatriX:\n");
     for (i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
      {
        printf("%d\t",a[i][j]);
      }printf("\n");
    }
}