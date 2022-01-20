#include<stdio.h>
#include<string.h>
void main()
{
  char a[50],b[50];
  int d;
  printf("enter 2 strings\n");
  scanf("%s%s",a,b);
  d=strcmp(a,b);
  if (d==0)
  {
    printf("%s = %s",a,b);
    
  }
  else if (d>0)
  {
    printf("%s is greater than %s",a,b);
  }
   else if (d<0)
  {
    printf("%s is less than %s",a,b);
  }
}