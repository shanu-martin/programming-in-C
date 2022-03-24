#include<stdio.h>
void crt();
void dis();
void ins();
void del();
int ar[10],n,i,sum=0;
int main()
{
  int ch;
  printf("ARRAY OPERATIONS\n");
  do
  {
  printf("\n________-   Menu   -________\n1.create\n2.insert\n3.delete\n4.display\n5.exit");
  printf("\nEnter your choice\n");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:
    crt();
    break;
    case 2:
    ins();
    break;
    case 3:
    del();
    break;
    case 4:
    dis();
    break;
    case 5:
    break;

  }
  }while (ch>0 && ch<5);
  if((ch>0) && (ch<6))
  {
    printf("program finished");
  }else
  printf("INvalid option\nhint:\tyou must enter the numbers corresponding to the option u need\n");

  return 0;
}
void crt()
{
  printf("Array size  ? \n");
  scanf("%d",&n);
  printf("Enter elements :  \n");
  for ( i = 0; i < n; i++)
  {
    scanf("%d",&ar[i]);
  }
printf("Your array has now bieng created....");
}
void dis()
{
  int i;
  printf("\nArray elements are :\n");
  for (i=0;i<n;i++)
  {
    printf("%d\t",ar[i]);
    }
printf("\n--------------------------------------");
}
void ins()
{
  int pos,itm,i;
  i=n;
  printf("Enter position");
  scanf("%d",&pos);
  printf("Enter the new element");
  scanf("%d",&itm);
  while(i>=pos)
  {
    ar[i+1]=ar[i];
    i=i-1;
  }
n=n+1;
ar[pos]=itm;
printf("\na new element( %d ) inserted succesfullly",itm);
}
void del()
{
   int pos,itm,i;
  printf("Enter position");
  scanf("%d",&pos);
  i=pos;
  itm=ar[pos];
  while(i<=n-1)
  {
    ar[i]=ar[i+1];
    i=i+1;
  }
n=n-1;
printf("\nelement( %d ) deleted",itm);
}