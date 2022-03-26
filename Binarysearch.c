#include<stdio.h>
void BS();
int a[30],n;
int main()
{
              //(•ˋ _ ˊ•) 
    BS();
     return 0;    
}
void BS()
{
    int i,item,beg,end,mid,pos=-1;
    printf("Enter array size : \t\t");
    scanf("%d",&n);
    printf("\nNow you can enter elements \n(please make sure the array is sorted)\n :\n");
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);

    }
    printf("\nARRAY\n");
    for(i=0;i<n;i++)
    {
      printf("%d\t\t",a[i]);

    }
    printf("\nEnter element to be searched \t\t\t");
    scanf("%d",&item);
    beg=0;
    end=n-1;
    while (beg<=end)
    {
      mid=(beg+end)/2;
      if (a[mid]==item)
      {
        pos=mid;
        printf("\nsearch succesfull....... \n%d is found at location %d",item,pos+1);
        break;
      }
      else if(a[mid]>item)
      end=mid-1;
      else
      beg=mid+1;
    }
 if(pos==-1)
 {
    printf("Ops not found!!");
  }
    
}