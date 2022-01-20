#include<stdio.h>
void swap(int,int);
void main()
{
  int a,b;
  printf("enter 2 numbers\n");
  scanf("%d%d",&a,&b);
  printf("before swappimg a=%d & b=%d\n",a,b);
  swap(a,b);
}
void swap(int a,int b)
{
  int temp;
  temp=a;
  a=b;
  b=temp;
  printf("after swapping a=%d,b=%d",a,b);
}