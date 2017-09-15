#include <iostream>
#include "bin/queue/queue.h"
#include "bin/llist/llist.h"
#include "bin/stack/stack.h"

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
			break;
	}
	return 0;
}