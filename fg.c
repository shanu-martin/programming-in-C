#include<stdio.h> 
 void create();
 int main() 
 { 
create(); 
return 0; 
 } 
void create()
{ 
  int arr[10],n,i=0; 
  
  printf( "enter the size of the array" ); 
  scanf( "%d" ,&n); 
   printf( "enter the elements\n" ); 
  while ( i<=n-1) 
{  
  scanf ( "%d" , &arr[i] ) ; 
  i++;
} 
printf( "array elements are" ); 
for (i=0;i<n;i++) 
{ 
printf( "%d\t" ,arr[i]); 
}
}