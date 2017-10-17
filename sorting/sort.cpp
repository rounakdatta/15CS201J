#include <iostream>
#include "src/display.h"
#include "src/swap.h"
#include "src/bubble_sort.h"
#include "src/insertion_sort.h"
#include "src/selection_sort.h"
#include "src/merge_sort.h"

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