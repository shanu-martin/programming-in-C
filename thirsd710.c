#include<stdio.h> 
 void create();
 int main() 
 { 
create(); 
return 0; 
 } 
void create()
{ 
  int arr[10],n,i=0,sum=0,avrg=0; 
  
  printf( "enter the size of the array" ); 
  scanf( "%d" ,&n); 
   printf( "enter the elements\n" ); 
  while ( i<=n-1) 
{  
  scanf ( "%d" , &arr[i] ) ; 
  sum=sum+arr[i];
   avrg=sum/n;
  i++;
} 
 printf("avarege of array elements are %d",avrg);
}