#include <iostream>
#include "src/linear_search.h"
#include "src/binary_search.h"

int main()
{
	int ch;
	std::cout<<"1.LINEAR SEARCH\n2.BINARY SEARCH"<<endl;
	std::cin>>ch;

	switch(ch) {
		case 1: lin();
			break; 
		case 2: bins();
			break;
	}
	return 0;
}