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
 if(temp==sum)
 {
   printf("the number is a palidrome");

 }
 else
 {
   printf("it's not a plidrome");

 }
 return 0;
}