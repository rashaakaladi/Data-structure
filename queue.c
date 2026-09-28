#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int queue[SIZE];
int front =-1;
int rear =-1;
int main()
{
void enqueue(int);
int dequeue();
void display();
int item,opt;
do
{
printf("\n1.ENQUEUE\n2.DEQUEUE\n3.EXIT\n4.DISPLAY\n");
printf("Enter your option:");
scanf("%d",&opt);
switch(opt)
{
case 01:
printf("Enter the value to be inserted:");
scanf("%d",&item);
enqueue(item);
break;

case 02:
item = dequeue();
if(item != -1)
printf("Deleted value:%d\n",item);
break;

case 03:
return 0;

case 04:
display();
break;

default:
printf("Invalid option\n");
}
}
while(1);
return 0;
}
void enqueue(int x)
{
if((rear+1)%SIZE==front)
{
printf("Queue is full\n");
}
else
{
if(front==-1)
{
front=0;
rear=0;
}
else
{
rear=(rear+1)%SIZE;
}
queue[rear]=x;
}
}
int dequeue()
{
int x;
if(front==-1)
{
printf("Queue is empty\n");
return -1;
}
else
{
x=queue[front];
if(front==rear)
{
front=-1;
rear=-1;
}
else
{
front=(front+1)%SIZE;
}
return x;
}
}
void display()
{
int i;
if(front==-1)
{
printf("Queue is empty\n");
}
else
{
printf("Queue elements are:\n");
i=front;
while(1)
{
printf("%d\n",queue[i]);
if(i==rear)
break;
i=(i+1)%SIZE;
}
}
}





