#include<stdio.h>
void square();
void rectangle();
void circle();
//funtions without argument & without return function😡😡😡
void main()
{
  square();
  rectangle();
  circle();

}
void square()
{
  int square,a;
  printf("enter lenght of one side :");
  scanf("%d",&a);
  square=a*a;
  printf("Area of the Square is %d\n",square);
}
void rectangle()
{
  int rectangle,l,b;
  printf("enter lenght & bearth:");
  scanf("%d%d",&l,&b);
  rectangle=l*b;
  printf("Area of the Rectangle is %d\n",rectangle);
}
void circle()
{
  float circle,r;
  printf("enter radious:");
  scanf("%f",&r);
  circle=r*r*3.14;
  printf("Area of the  is %f\n",circle);
}