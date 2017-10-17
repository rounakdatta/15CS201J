#include <iostream>
#include "src/queue/queue.h"
#include "src/llist/llist.h"
#include "src/stack/stack.h"
#include "src/tree/tree.h"

int main()
{
	int ch;
	std::cout<<"1.LINKED LIST\n2.STACK\n3.QUEUE\n4.TREE"<<endl;
	std::cin>>ch;

	switch(ch) {
		case 1: 
			llistops();
			break; 
		case 2: 
			stackops();
			break;
		case 3:
			qops();
			break;
		case 4:
			treeops();
			break;
	}
	return 0;
}