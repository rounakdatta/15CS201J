#include <iostream>

void swap(int* m, int* n)
{
	int temp;
	temp = *m;
	*m = *n;
	*n = temp;
}
