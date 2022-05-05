#include<stdio.h>
#define MAX 5
int queue[MAX],rear=-1,front=-1;
int insert();
int delete();
int display();

int main()
{
  int X;
  do
  {
    printf("\n__________________________________________________________");
    printf("\n_____MENU_____\n1.insert\n2.delete\n3.display\n4.exit\n\n");
    printf("Enter your choice:");
    scanf("%d",&X);
    switch (X)
    {
    case 1:
    insert();
      break;
    case 2:
    delete();
      break;
    case 3:
    display();
      break;
    default:
      break;
    }
  } while (X!=4);
  return 0;
  
}


int insert()
{
  int item;
  if(rear==MAX-1)
  {
    printf("overflow");
  }
  else
  {
    printf("Enter element to insert:");
    scanf("%d",&item);
    if(front==-1 && rear==-1)
    {
      front=0;
      rear=0;
    }
    else
    {
      rear=rear+1;
    }
    queue[rear]=item;
  }
  return 0;
}


int delete()
{
  int D;
  if (front==-1 || front>rear)
  {
    printf("UnderFlow");
  }
  else
  {
    D=queue[front];
    front=front+1;
    printf("deleted :%d",D);
  }
  return 0;
  
}

int display()
{
  int i;
  if (front==-1 && rear==-1)
  {
    printf("Oops Empty");
  }
  else
  {
    printf("\n-----QUEUE-----\n");
    for(i=front;i<=rear;i++)
    {
      printf("%d\t",queue[i]);
    }
  }
  
  return 0;
}