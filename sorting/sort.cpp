#include <iostream>
#include "src/display.h"
#include "src/swap.h"
#include "bin/bubble_sort.h"
#include "bin/insertion_sort.h"
#include "bin/selection_sort.h"
#include "bin/merge_sort.h"

int main()
{
	int ch;
	std::cout<<"1.BUBBLE SORT\n2.INSERTION SORT\n3.SELECTION SORT\n4.MERGE SORT\n";
	std::cin>>ch;

	switch(ch) {
		case 1: bbl(); 
			break; 
		case 2: ins(); 
			break;
		case 3: selec(); 
			break; 
		case 4: mrg();
			break;
	}
	return 0;
}