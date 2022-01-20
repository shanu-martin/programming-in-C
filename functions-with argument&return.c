#include<stdio.h>
int add(int,int);
//funtions with argument & return function
void main()
{
  int a,b,s;
  printf("enter the numbers:\n");
  scanf("%d%d",&a,&b);
  s=add(a,b);
  printf("sum=%d",s);

}
int add(int x,int y)
{
  int sum;
  sum=x+y;
  return(sum);


}