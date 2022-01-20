#include<stdio.h>
#include<string.h>
void main()
{
  char a[50]="Hello";
  printf("Before =%s\n",a);
  printf("After : %s",strrev(a));
}