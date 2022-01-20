#include<stdio.h>
void main()
{
  int n,r,sum=0,var;
  printf("enter a  number");
  scanf("%d",&n);
  var=n;
  while(n>0)
  {
    r=n%10;
    n=n/10;
    sum=sum+(r*r*r);

  }
  if(var==sum)
  {
    printf("it is a armstrong");

  }
  else
  {
    printf("it's not armstrong");


  }
}