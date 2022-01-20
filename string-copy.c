#include<stdio.h>
#include<string.h>
void main()
{
  char a[50],b[50];
  printf("Enter main string \n");
  scanf("%s",a);
  strcpy(b,a);
  printf("string copied to b =%s\n and thus now b also holds this value",b);
}