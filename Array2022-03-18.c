#include<stdio.h>
void crt();
int main()
{
  crt();
  return 0;

}
void crt()
{
  int ar[10],n,i,sum=0;
  float avg;
  printf("Array size  ? \n");
  scanf("%d",&n);
  printf("Enter elements :  \n");
  for ( i = 0; i < n; i++)
  {
    scanf("%d",&ar[i]);
    sum=sum+ar[i];
  }
  printf("\nArray elements are :\n");
  for ( i = 0; i < n; i++)
  {
    printf("%d\t",ar[i]);
  }
  printf("\n Array sum is %d ",sum);
   avg=sum/n;
  printf("\n Average of the Array  is %f ",avg);
  

}