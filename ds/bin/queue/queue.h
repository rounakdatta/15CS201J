#include <iostream>
#include <stdlib.h>
using namespace std;

struct node
{
  int data;
  node* next;
};

node *front, *rear, *curr;

void enq(int m)
{
  curr = (node *)malloc(sizeof(node));
  curr->data = m;
  curr->next = NULL;

  if(rear == NULL)
    front = rear = curr;
  else
  {
    rear->next = curr;
    rear = curr;
  }
}

void deq()
{
  if(front == NULL)
  {
    cout<<"empty queue";
    return;
  }

  front = front->next;
}

void disp()
{
  curr = front;
  while(curr != NULL)
  {
    cout<<curr->data<<"-|-";
    curr = curr->next;
  }
  cout<<endl;
}

uint length()
{
  uint count = 0;
  curr = front;
  while(curr != NULL)
  {
    count += 1;
    curr = curr->next;
  }
  return count;
}

int top()
{
  if (front == NULL)
  {
    cout<<"empty queue"<<endl;
    return -1;
  }
  return front->data;
}

void qops()
{
  int ch;
  front = rear = NULL;
  do
  {
    cout<<"----\n0.Exit\n1.enqueue(n)\n2.dequeue()\n3.display()\n4.length()\n5.top()\n----"<<endl;
    cin>>ch;
    switch(ch)
    {
      case 0:
        break;
      case 1:
        int val;
        cin>>val;
        enq(val);
        break;
      case 2:
        deq();
        break;
      case 3:
        disp();
        break;
      case 4:
        cout<<length()<<endl;
        break;
      case 5:
        cout<<top()<<endl;
        break;
    }
  }
  while(ch != 0);
  return;
}