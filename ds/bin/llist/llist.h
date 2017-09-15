#include <iostream>
using namespace std;

struct lnode
{
	int data;
	lnode *next;
};

void push_front(lnode **ref, int data){
	lnode *new_node = new lnode;

	new_node->data = data;
	new_node->next = *ref;

	*ref = new_node;
}

void push_end(lnode **ref, int data){
	lnode *new_node = new lnode;

	new_node->data = data;
	new_node->next = NULL;

	if(*ref == NULL){
		*ref = new_node;
	}

	else{
		lnode *temp = *ref;
		while(temp->next != NULL){
			temp = temp->next;
		}

		temp->next = new_node;
	}
}

void display(lnode *head){
	while(head != NULL){
		cout<<head->data<<endl;
		head = head->next;
	}
}

void llistops()
{
  int ch;
  struct lnode *head = NULL;
  do
  {
    cout<<"----\n0.Exit\n1.push_front\n2.push_end\n3.display\n----"<<endl;
    cin>>ch;
    switch(ch)
    {
      case 0:
        break;
      case 1:
        int value;
        cin>>value;
        push_front(&head, value);
        break;
      case 2:
      	cin>>value;
        push_end(&head, value);
        break;
      case 3:
        display(head);
        break;
    }
  }
  while(ch != 0);
  return;
}