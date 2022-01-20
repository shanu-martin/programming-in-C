#include<stdio.h>
int main()
{
 int n,sum=0,r,temp;
 printf("enter a number  -");
 scanf("%d",&n);
 while(n>0)
 {
   r=n%10;
   sum=sum*10+r;
   n=n/10;
 } 
 printf("%d is the reverse of the number",sum);
 return 0;
}