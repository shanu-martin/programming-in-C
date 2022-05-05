#include<stdio.h>
#define M 5

int stack[M],top=-1;
int push();
int pop();
int peek();
int disp();

    int main()
    {
      int X;
      do
      {
        printf("\n____________________________________________________________\n");
        printf("\n Menu\n1.\tpush\n2.\tpop\n3.\tpeek\n4.\tdisplay\n\n\nENter 5 to exit\n");
        printf("hint:make sure you enter the number coressponding to that option  \n \t\t\t  :");
        scanf("%d",&X);
        switch (X)
        {
        case 1:
          push();
          break;
        case 2:pop();
          break;
        case 3:
        peek();
        case 4:
        disp();
        break;
        default:
          break;
        }
      
      } while (X!=5);
      return 0;
      
    }
int push()
{
  int item;
  if (top==M-1)
  {
    printf("Oops Overflow");
  }
  else
  {
    printf("Enter item to push");
    scanf("%d",&item);
    top=top+1;
    stack[top]=item;
    
  }
  return 0;
}

int pop()
{
  int tmp;
  if (top==-1)
  {
    printf("Oops UnderFlow");
  }
  else
  {
    tmp=stack[top];
    top=top-1;
    printf(" the element poped is %d",tmp);

  }
  return 0;
  
}

int peek()
{
  if (top==-1)
  {
    printf("Sorry the stack is Empty");
  }
  else
  {
   printf("Top element is %d",stack[top]);

  }
  return 0;
}

int disp()
{
  int i;
  if (top==-1)
  {
    printf("Sorry the stack is Empty");
  }
  else
  {
    printf("\n_____stack_____\n");
    for(i=0;i<=top;i++)
    {
      printf("%d \t\t",stack[i]);
    }
  }
  return 0;
}