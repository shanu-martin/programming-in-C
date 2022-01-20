#include<stdio.h>
int add(int,int);
//funtions with argument & without😄 😡return function
void main()
{
  int a,b,s;
  printf("enter the numbers:\n");
  scanf("%d%d",&a,&b);
  add(a,b);

}
int add(int x,int y)
{
  int sum;
  sum=x+y;
  printf("sum=%d",sum);


}